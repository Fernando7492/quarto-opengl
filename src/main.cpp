#define GL_SILENCE_DEPRECATION
#include <GL/glew.h>   
#include <GL/glut.h> 
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#include<simpleDraw.h>
#include<bedroomObjects.h>

GLboolean redFlag = true, fanSwitch = false;
double theta = 180.0, y = 1.36, z = 7.97888, a=2;
double windowHeight=800, windowWidth=600;
double eyeX=7.0, eyeY=2.0, eyeZ=15.0, refX = 0, refY=0,refZ=0;


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
    clock();

    glFlush();
    glutSwapBuffers();
}

void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {
    case 'w': // move eye point upwards along Y axis
        eyeY+=1.0;
        break;
    case 's': // move eye point downwards along Y axis
        eyeY-=1.0;
        break;
    case 'a': // move eye point left along X axis
        eyeX-=1.0;
        break;
    case 'd': // move eye point right along X axis
        eyeX+=1.0;
        break;
    case 'o':  //zoom out
        eyeZ+=1;
        break;
    case 'i': //zoom in
        eyeZ-=1;
        break;
    case 'q': //back to default eye point and ref point
            eyeX=7.0; eyeY=2.0; eyeZ=15.0;
            refX=0.0; refY=0.0; refZ=0.0;
        break;
    case 'j': // move ref point upwards along Y axis
        refY+=1.0;
        break;
    case 'n': // move ref point downwards along Y axis
        refY-=1.0;
        break;
    case 'b': // move ref point left along X axis
        refX-=1.0;
        break;
    case 'm': // move eye point right along X axis
        refX+=1.0;
        break;
    case 'k':  //move ref point away from screen/ along z axis
        refZ+=1;
        break;
    case 'l': //move ref point towards screen/ along z axis
        refZ-=1;
        break;
        case 'f': //turn on/off fan
            if(fanSwitch == false) {
                fanSwitch = true; break;
            }
            else{
                fanSwitch = false; break;
            }
    case 27:    // Escape key
        exit(1);
    }
    
    glutPostRedisplay();
}

void animate(){
    animateClock();
    animateFan();
}

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    
    std::cout<<"PONTO DE VISTA:"<< std::endl;
    std::cout<<"w: subir"<<std::endl;
    std::cout<<"s: descer"<<std::endl;
    std::cout<<"a: esquerda"<<std::endl;
    std::cout<<"d: direita"<<std::endl;
    std::cout<<"i: aumentar zoom"<<std::endl;
    std::cout<<"o: diminuir zoom"<<std::endl;
    std::cout<<"      "<<std::endl;
    std::cout<<"CAMERA:"<< std::endl;
    std::cout<<"j: subir"<<std::endl;
    std::cout<<"n: descer"<<std::endl;
    std::cout<<"b: esquerda"<<std::endl;
    std::cout<<"m: direita"<<std::endl;
    std::cout<<"l: aumentar zoom"<<std::endl;
    std::cout<<"k: diminuir zoom"<<std::endl;
    std::cout<<"      "<<std::endl;
    std::cout<<"Q: voltar para posição inicial"<<std::endl;
    std::cout<<"      "<<std::endl;
    std::cout<<"f: ligar/desligar ventilador    "<<std::endl;
    std::cout<<"      "<<std::endl;
    std::cout<<"____________________"<<std::endl;
    std::cout<<"      "<<std::endl;
    std::cout<<"      "<<std::endl;
    
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowPosition(100,100);
    glutInitWindowSize(windowHeight, windowWidth);
    glutCreateWindow("Quarto");

    glShadeModel( GL_SMOOTH );
    glEnable( GL_DEPTH_TEST );
    //glEnable(GL_NORMALIZE);
    glutDisplayFunc(display);
    glutKeyboardFunc(myKeyboardFunc);
    //glutSpecialFunc(myKeyboardFunc);
    glutIdleFunc(animate);
    glutMainLoop();

    return 0;
}
