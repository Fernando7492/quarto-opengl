#define GL_SILENCE_DEPRECATION
#include <GL/glew.h>   
#include <GL/glut.h> 
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#include<simpleDraw.h>
#include<bedroomObjects.h>
#include<keyboard.h>
#include<display.h>
#include<animations.h>

GLboolean redFlag = true, fanSwitch = false;
double theta = 180.0, y = 1.36, z = 7.97888, a=2;
double windowHeight=800, windowWidth=600;
double eyeX=7.0, eyeY=2.0, eyeZ=15.0, refX = 0, refY=0,refZ=0;



int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    instructions();
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowPosition(100,100);
    glutInitWindowSize(windowHeight, windowWidth);
    glutCreateWindow("Quarto");

    glShadeModel( GL_SMOOTH );
    glEnable( GL_DEPTH_TEST );
    //glEnable(GL_NORMALIZE);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    //glutSpecialFunc(myKeyboardFunc);
    glutIdleFunc(animations);
    glutMainLoop();

    return 0;
}
