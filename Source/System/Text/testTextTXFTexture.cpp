#include "OSGGLUT.h"
#include "OSGConfig.h"
#include "OSGSimpleGeometry.h"
#include "OSGGLUTWindow.h"
#include "OSGSimpleSceneManager.h"
#include "OSGBaseFunctions.h"
#include "OSGTransform.h"
#include "OSGGroup.h"
#include "OSGSimpleStatisticsForeground.h"
#include "OSGSolidBackground.h"
#include "OSGImage.h"
#include "OSGMaterialChunk.h"
#include "OSGTextureTransformChunk.h"
#include "OSGSolidBackground.h"
#include "OSGGeometry.h"
#include "OSGTypedGeoIntegralProperty.h"

#include "OSGTextTXFFace.h"
#include "OSGTextTXFGlyph.h"
#include "OSGTextFaceFactory.h"

#include <sstream>

// Activate the OpenSG namespace
using namespace std;

#define COMMAND_FAMILY_SANS 701
#define COMMAND_FAMILY_SERIF 702
#define COMMAND_FAMILY_TYPEWRITER 703
#define COMMAND_FAMILY_BASE 704
#define COMMAND_STYLE_PLAIN 301
#define COMMAND_STYLE_BOLD 302
#define COMMAND_STYLE_ITALIC 303
#define COMMAND_STYLE_BOLDITALIC 304
#define COMMAND_SIZE_INC1 401
#define COMMAND_SIZE_INC10 402
#define COMMAND_SIZE_DEC1 403
#define COMMAND_SIZE_DEC10 404
#define COMMAND_GAP_INC1 501
#define COMMAND_GAP_DEC1 502
#define COMMAND_TEXTUREWIDTH_AUTO 601
#define COMMAND_TEXTUREWIDTH_64 602
#define COMMAND_TEXTUREWIDTH_128 603
#define COMMAND_TEXTUREWIDTH_256 604
#define COMMAND_TEXTUREWIDTH_512 605
#define COMMAND_TEXTUREWIDTH_1024 606
#define COMMAND_TEXTUREWIDTH_2048 607
#define COMMAND_TEXTUREWIDTH_4096 608
#define COMMAND_WRITE_TO_FILE 901

// The SimpleSceneManager to manage simple applications
OSG::SimpleSceneManagerRefPtr mgr;

OSG::NodeRecPtr scene;

OSG::SimpleStatisticsForegroundRecPtr statfg;
OSG::StatElemDesc<OSG::StatStringElem> familyDesc("family", "The font family");
OSG::StatElemDesc<OSG::StatStringElem> styleDesc("style", "The font style");
OSG::StatElemDesc<OSG::StatIntElem> sizeDesc("size", "The height of the characters");
OSG::StatElemDesc<OSG::StatIntElem> gapDesc("gap", "The gap between characters");
OSG::StatElemDesc<OSG::StatStringElem> textureSizeDesc("textureSize", "The size of the texture");

OSG::TextTXFFaceRefPtr pFace = 0;
string family;
vector<string> families;
OSG::TextFace::Style style = OSG::TextFace::STYLE_PLAIN;
OSG::TextTXFParam param;
string filename;

int mainMenuID;

// forward declaration so we can have the interesting stuff upfront
int setupGLUT( int *argc, char *argv[] );

// Create the metrics
OSG::NodeTransitPtr createMetrics(OSG::TextTXFFace *face, OSG::UInt32 width, OSG::UInt32 height)
{
    OSG::GeometryUnrecPtr geoPtr = OSG::Geometry::create();

    OSG::GeoUInt8PropertyUnrecPtr typesPtr = OSG::GeoUInt8Property::create();
    geoPtr->setTypes(typesPtr);

    OSG::GeoUInt32PropertyUnrecPtr lensPtr = OSG::GeoUInt32Property::create();
    geoPtr->setLengths(lensPtr);

    OSG::GeoPnt3fPropertyUnrecPtr posPtr = OSG::GeoPnt3fProperty::create();
    geoPtr->setPositions(posPtr);

    OSG::GeoColor3fPropertyUnrecPtr colorsPtr = OSG::GeoColor3fProperty::create();
    colorsPtr->push_back(OSG::Color3f(0.f, 0.f, 1.f));
    colorsPtr->push_back(OSG::Color3f(1.f, 0.f, 0.f));
    geoPtr->setColors(colorsPtr);

    OSG::GeoUInt32PropertyUnrecPtr posIndicesPtr = OSG::GeoUInt32Property::create();
    geoPtr->setIndex(posIndicesPtr, OSG::Geometry::PositionsIndex);
    OSG::GeoUInt32PropertyUnrecPtr colIndicesPtr = OSG::GeoUInt32Property::create();
    geoPtr->setIndex(colIndicesPtr, OSG::Geometry::ColorsIndex);

    wstring characters = face->getParam().getCharacters();
    wstring::const_iterator it;
    for (it = characters.begin(); it != characters.end(); ++it)
    {
        const OSG::TextTXFGlyph &glyph = face->getTXFGlyph(*it);
        typesPtr->push_back(GL_LINE_LOOP);
        lensPtr->push_back(4);
        OSG::Real32 left = static_cast<OSG::Real32>(width) * -0.5f + glyph.getX();
        OSG::Real32 right = left + static_cast<OSG::Real32>(glyph.getPixmapWidth());
        OSG::Real32 bottom = static_cast<OSG::Real32>(height) * -0.5f + glyph.getY();
        OSG::Real32 top = bottom + static_cast<OSG::Real32>(glyph.getPixmapHeight());
        OSG::UInt32 posOffset = posPtr->size();
        posPtr->push_back(OSG::Vec3f(left, bottom, 0.f));
        posPtr->push_back(OSG::Vec3f(right, bottom, 0.f));
        posPtr->push_back(OSG::Vec3f(right, top, 0.f));
        posPtr->push_back(OSG::Vec3f(left, top, 0.f));
        posIndicesPtr->push_back(posOffset);
        colIndicesPtr->push_back(0);
        posIndicesPtr->push_back(posOffset + 1);
        colIndicesPtr->push_back(0);
        posIndicesPtr->push_back(posOffset + 2);
        colIndicesPtr->push_back(0);
        posIndicesPtr->push_back(posOffset + 3);
        colIndicesPtr->push_back(0);
    }

    // Bounding box
    typesPtr->push_back(GL_LINE_LOOP);
    lensPtr->push_back(4);
    OSG::Real32 left = static_cast<OSG::Real32>(width) * -0.5f;
    OSG::Real32 right = static_cast<OSG::Real32>(width) * 0.5f;
    OSG::Real32 top = static_cast<OSG::Real32>(height) * 0.5f;
    OSG::Real32 bottom = static_cast<OSG::Real32>(height) * -0.5f;
    OSG::UInt32 posOffset = posPtr->size();
    posPtr->push_back(OSG::Vec3f(left, bottom, 0.f));
    posPtr->push_back(OSG::Vec3f(right, bottom, 0.f));
    posPtr->push_back(OSG::Vec3f(right, top, 0.f));
    posPtr->push_back(OSG::Vec3f(left, top, 0.f));
    posIndicesPtr->push_back(posOffset);
    colIndicesPtr->push_back(1);
    posIndicesPtr->push_back(posOffset + 1);
    colIndicesPtr->push_back(1);
    posIndicesPtr->push_back(posOffset + 2);
    colIndicesPtr->push_back(1);
    posIndicesPtr->push_back(posOffset + 3);
    colIndicesPtr->push_back(1);

    OSG::SimpleMaterialUnrecPtr matPtr = OSG::SimpleMaterial::create();
    geoPtr->setMaterial(matPtr);

    OSG::NodeTransitPtr nodePtr = OSG::Node::create();
    nodePtr->setCore(geoPtr);

    return nodePtr;
}

void updateFace(void)
{
    // Try to create new face
    if (family.empty() == false)
    {
        OSG::TextTXFFaceRefPtr newFace = OSG::TextTXFFace::create(family, style, param);
        if (newFace == 0)
            return;
        pFace = newFace;
    }
    if (pFace == 0)
        return;

    // Update information on the screen
    family = pFace->getFamily();

    if(statfg->getCollector() != NULL)
    {
        statfg->getCollector()->getElem(familyDesc)->set(family);
        filename = family;
        string::size_type i;
        for (i = 0; i < filename.size(); )
            if (isalnum(filename[i]) == false)
                filename.erase(i, 1);
            else
                ++i;
        style = pFace->getStyle();
        OSG::StatStringElem *statElem = statfg->getCollector()->getElem(styleDesc);
        switch (style)
        {
            case OSG::TextFace::STYLE_PLAIN:
                statElem->set("Plain");
                filename.append("-Plain.txf");
                break;
            case OSG::TextFace::STYLE_BOLD:
                statElem->set("Bold");
                filename.append("-Bold.txf");
                break;
            case OSG::TextFace::STYLE_ITALIC:
                statElem->set("Italic");
                filename.append("-Italic.txf");
                break;
            case OSG::TextFace::STYLE_BOLDITALIC:
                statElem->set("Bold & Italic");
                filename.append("-BoldItalic.txf");
                break;
        }
        statfg->getCollector()->getElem(sizeDesc)->set(pFace->getParam().size);
        statfg->getCollector()->getElem(gapDesc)->set(pFace->getParam().gap);
        OSG::ImageUnrecPtr imagePtr = pFace->getTexture();
        ostringstream os;
        os << imagePtr->getWidth() << 'x' << imagePtr->getHeight();
        statfg->getCollector()->getElem(textureSizeDesc)->set(os.str());
    }

    glutSetMenu(mainMenuID);
    glutChangeToMenuEntry(6, (string("Write to ") + filename).c_str(), COMMAND_WRITE_TO_FILE);
}

void updateScene(void)
{
    if(pFace == NULL)
        return;

    // Put it all together into a Geometry NodeCore.
    OSG::ImageUnrecPtr imagePtr = pFace->getTexture();
    OSG::GeometryUnrecPtr geo = OSG::makePlaneGeo(imagePtr->getWidth(), imagePtr->getHeight(), 1, 1);
    OSG::NodeUnrecPtr textNode = OSG::Node::create();
    textNode->setCore(geo);
    OSG::NodeUnrecPtr transNodePtr = OSG::Node::create();
    OSG::TransformUnrecPtr transPtr = OSG::Transform::create();
    OSG::Matrix transMatrix;
    transMatrix.setTranslate(0.f, 0.f, -1.f);
    transPtr->setMatrix(transMatrix);
    transNodePtr->setCore(transPtr);
    transNodePtr->addChild(textNode);

    OSG::TextureObjChunkUnrecPtr texObjChunk = OSG::TextureObjChunk::create();
    texObjChunk->setImage(imagePtr);
    texObjChunk->setWrapS(GL_CLAMP);
    texObjChunk->setWrapT(GL_CLAMP);
    texObjChunk->setMagFilter(GL_NEAREST);
    texObjChunk->setMinFilter(GL_NEAREST);
    OSG::TextureEnvChunkUnrecPtr texEnvChunk = OSG::TextureEnvChunk::create();
    texEnvChunk->setEnvMode(GL_MODULATE);

    OSG::MaterialChunkUnrecPtr matChunk = OSG::MaterialChunk::create();
    matChunk->setAmbient(OSG::Color4f(1.f, 1.f, 1.f, 1.f));
    matChunk->setDiffuse(OSG::Color4f(1.f, 1.f, 1.f, 1.f));
    matChunk->setEmission(OSG::Color4f(0.f, 0.f, 0.f, 1.f));
    matChunk->setSpecular(OSG::Color4f(0.f, 0.f, 0.f, 1.f));
    matChunk->setShininess(0);

    OSG::BlendChunkUnrecPtr blendChunk = OSG::BlendChunk::create();
    blendChunk->setSrcFactor(GL_SRC_ALPHA);
    blendChunk->setDestFactor(GL_ONE_MINUS_SRC_ALPHA);

    OSG::ChunkMaterialUnrecPtr m = OSG::ChunkMaterial::create();
    m->addChunk(texObjChunk);
    m->addChunk(texEnvChunk);
    m->addChunk(matChunk);
    m->addChunk(blendChunk);

    geo->setMaterial(m);

    scene->clearChildren();
    scene->addChild(createMetrics(pFace, imagePtr->getWidth(), imagePtr->getHeight()));
    scene->addChild(transNodePtr);
}

// Initialize GLUT & OpenSG and set up the scene
int main(int argc, char **argv)
{
    // OSG init
    OSG::osgInit(argc,argv);

    {
        // GLUT init
        int winid = setupGLUT(&argc, argv);
    
        // the connection between GLUT and OpenSG
        OSG::GLUTWindowUnrecPtr gwin= OSG::GLUTWindow::create();
        gwin->setGlutId(winid);
        gwin->init();
    
        // put the geometry core into a node
        scene = OSG::Node::create();
        OSG::GroupUnrecPtr groupPtr = OSG::Group::create();
        scene->setCore(groupPtr);
    
        statfg = OSG::SimpleStatisticsForeground::create();
        statfg->setSize(25);
        statfg->setColor(OSG::Color4f(0,1,0,0.9f));
        statfg->addElement(familyDesc, "Family: %s");
        statfg->addElement(styleDesc, "Style: %s");
        statfg->addElement(sizeDesc, "Size: %i");
        statfg->addElement(gapDesc, "Gap: %i");
        statfg->addElement(textureSizeDesc, "Texture Size: %s");
    
        // Create the background
        OSG::SolidBackgroundUnrecPtr bg = OSG::SolidBackground::create();
        bg->setColor(OSG::Color3f(0.1f, 0.1f, 0.5f));
    
        if (argc > 1)
        {
            pFace = OSG::TextTXFFace::createFromFile(argv[1]);
            if (pFace == 0)
                family = "SANS";
            else
            {
                family.erase();
            }
        }
        else
            family = "SANS";
        updateFace();
        updateScene();
    
        // create the SimpleSceneManager helper
        mgr = OSG::SimpleSceneManager::create();
    
        // tell the manager what to manage
        mgr->setWindow(gwin );
        mgr->setRoot  (scene);
    
        // show the whole scene
        mgr->showAll();
    
        // add the statistics forground
        gwin->getPort(0)->addForeground(statfg);
        gwin->getPort(0)->setBackground(bg);
    }

    // GLUT main loop
    glutMainLoop();

    return 0;
}

//
// GLUT callback functions
//

// redraw the window
void display( void )
{
    mgr->redraw();
}

// react to size changes
void reshape(int w, int h)
{
    mgr->resize(w, h);
    glutPostRedisplay();
}

// react to mouse button presses
void mouse(int button, int state, int x, int y)
{
    if (state)
        mgr->mouseButtonRelease(button, x, y);
    else
        mgr->mouseButtonPress(button, x, y);

    glutPostRedisplay();
}

// react to mouse motions with pressed buttons
void motion(int x, int y)
{
    mgr->mouseMove(x, y);
    glutPostRedisplay();
}

// react to keys
void keyboard(unsigned char k, int x, int y)
{
    switch(k)
    {
        case 27:
        {
            mgr    = NULL;
            pFace  = NULL;
            scene  = NULL;
            statfg = NULL;

            OSG::osgExit();
            exit(0);
        }
        break;
    }
}

void menu(int command)
{
    switch (command)
    {
        case COMMAND_FAMILY_SANS:
            family = "SANS";
            updateFace();
            break;
        case COMMAND_FAMILY_SERIF:
            family = "SERIF";
            updateFace();
            break;
        case COMMAND_FAMILY_TYPEWRITER:
            family = "TYPEWRITER";
            updateFace();
            break;
        case COMMAND_STYLE_PLAIN:
            style = OSG::TextFace::STYLE_PLAIN;
            updateFace();
            break;
        case COMMAND_STYLE_BOLD:
            style = OSG::TextFace::STYLE_BOLD;
            updateFace();
            break;
        case COMMAND_STYLE_ITALIC:
            style = OSG::TextFace::STYLE_ITALIC;
            updateFace();
            break;
        case COMMAND_STYLE_BOLDITALIC:
            style = OSG::TextFace::STYLE_BOLDITALIC;
            updateFace();
            break;
        case COMMAND_SIZE_INC1:
            param.size += 1;
            updateFace();
            break;
        case COMMAND_SIZE_INC10:
            param.size += 10;
            updateFace();
            break;
        case COMMAND_SIZE_DEC1:
            if (param.size <= 1)
                param.size = 1;
            else
                param.size -= 1;
            updateFace();
            break;
        case COMMAND_SIZE_DEC10:
            if (param.size <= 11)
                param.size = 1;
            else
                param.size -= 10;
            updateFace();
            break;
        case COMMAND_GAP_INC1:
            param.gap += 1;
            updateFace();
            break;
        case COMMAND_GAP_DEC1:
            if (param.gap <= 0)
                param.gap = 0;
            else
                param.gap -= 1;
            updateFace();
            break;
        case COMMAND_TEXTUREWIDTH_AUTO:
            param.textureWidth = 0;
            updateFace();
            break;
        case COMMAND_TEXTUREWIDTH_64:
            param.textureWidth = 64;
            updateFace();
            break;
        case COMMAND_TEXTUREWIDTH_128:
            param.textureWidth = 128;
            updateFace();
            break;
        case COMMAND_TEXTUREWIDTH_256:
            param.textureWidth = 256;
            updateFace();
            break;
        case COMMAND_TEXTUREWIDTH_512:
            param.textureWidth = 512;
            updateFace();
            break;
        case COMMAND_TEXTUREWIDTH_1024:
            param.textureWidth = 1024;
            updateFace();
            break;
        case COMMAND_TEXTUREWIDTH_2048:
            param.textureWidth = 2048;
            updateFace();
            break;
        case COMMAND_TEXTUREWIDTH_4096:
            param.textureWidth = 4096;
            updateFace();
            break;
        case COMMAND_WRITE_TO_FILE:
            pFace->writeToFile(filename);
            break;
        default:
            if (command < COMMAND_FAMILY_BASE)
                return;
            family = families[command - COMMAND_FAMILY_BASE];
            updateFace();
    }
    updateScene();
    mgr->showAll();
    glutPostRedisplay();
}

// setup the GLUT library which handles the windows for us
int setupGLUT(int *argc, char *argv[])
{
    glutInit(argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);

    int winid = glutCreateWindow("OpenSG");

    glutReshapeFunc(reshape);
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutKeyboardFunc(keyboard);

    int familyMenuID = glutCreateMenu(menu);
    glutSetMenu(familyMenuID);
    glutAddMenuEntry("SANS", COMMAND_FAMILY_SANS);
    glutAddMenuEntry("SERIF", COMMAND_FAMILY_SERIF);
    glutAddMenuEntry("TYPEWRITER", COMMAND_FAMILY_TYPEWRITER);
    OSG::TextFaceFactory::the()->getFontFamilies(families);
    OSG::UInt32 i;
    for (i = 0; i < families.size(); ++i)
        glutAddMenuEntry(families[i].c_str(), COMMAND_FAMILY_BASE + i);
    int styleMenuID = glutCreateMenu(menu);
    glutSetMenu(styleMenuID);
    glutAddMenuEntry("Plain", COMMAND_STYLE_PLAIN);
    glutAddMenuEntry("Bold", COMMAND_STYLE_BOLD);
    glutAddMenuEntry("Italic", COMMAND_STYLE_ITALIC);
    glutAddMenuEntry("Bold + Italic", COMMAND_STYLE_BOLDITALIC);
    int sizeMenuID = glutCreateMenu(menu);
    glutSetMenu(sizeMenuID);
    glutAddMenuEntry("Increment size by 1", COMMAND_SIZE_INC1);
    glutAddMenuEntry("Increment size by 10", COMMAND_SIZE_INC10);
    glutAddMenuEntry("Decrement size by 1", COMMAND_SIZE_DEC1);
    glutAddMenuEntry("Decrement size by 10", COMMAND_SIZE_DEC10);
    int gapMenuID = glutCreateMenu(menu);
    glutSetMenu(gapMenuID);
    glutAddMenuEntry("Increment gap by 1", COMMAND_GAP_INC1);
    glutAddMenuEntry("Decrement gap by 1", COMMAND_GAP_DEC1);
    int textureWidthMenuID = glutCreateMenu(menu);
    glutSetMenu(textureWidthMenuID);
    glutAddMenuEntry("Automatic", COMMAND_TEXTUREWIDTH_AUTO);
    glutAddMenuEntry("64", COMMAND_TEXTUREWIDTH_64);
    glutAddMenuEntry("128", COMMAND_TEXTUREWIDTH_128);
    glutAddMenuEntry("256", COMMAND_TEXTUREWIDTH_256);
    glutAddMenuEntry("512", COMMAND_TEXTUREWIDTH_512);
    glutAddMenuEntry("1024", COMMAND_TEXTUREWIDTH_1024);
    glutAddMenuEntry("2048", COMMAND_TEXTUREWIDTH_2048);
    glutAddMenuEntry("4096", COMMAND_TEXTUREWIDTH_4096);
    mainMenuID = glutCreateMenu(menu);
    glutSetMenu(mainMenuID);
    glutAddSubMenu("Family", familyMenuID);
    glutAddSubMenu("Style", styleMenuID);
    glutAddSubMenu("Size", sizeMenuID);
    glutAddSubMenu("Gap", gapMenuID);
    glutAddSubMenu("TextureWidth", textureWidthMenuID);
    glutAddMenuEntry("Write to ", COMMAND_WRITE_TO_FILE);
    glutAttachMenu(GLUT_RIGHT_BUTTON);

    return winid;
}
