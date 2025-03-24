#include <GL/glew.h>   
#include <GL/glut.h> 
#include <bedroomObjects.h>
#include <display.h>

void display(void){

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluPerspective(60,1,1,100);

    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
    gluLookAt(eyeX,eyeY,eyeZ,  refX,refY,refZ,  0,1,0); //7,2,15, 0,0,0, 0,1,0

    glViewport(0, 0, 800, 600);
    
    bedroomStructure();
    bedsideTable();
    bed();
    wardrobe();
    lampshade();
    flowerPot();
    rack();
    cabinet();
    window();
    fan();
    dressingTable();
    myClock();

    glFlush();
    glutSwapBuffers();
}