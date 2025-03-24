#include <GL/glew.h>   
#include <GL/glut.h> 
#include <bedroomObjects.h>
#include <simpleDraw.h>

void flowerPot(){
    //Vaso de flor
        glPushMatrix();
        glTranslatef(-1.78, 0.4, -1.1); 
    
        //vaso
        glColor3f(0.545, 0.271, 0.075);
        glPushMatrix();
        glTranslatef(.7,0,10);
        glScalef(0.1, 0.1, 0.1);
        drawCube();
        glPopMatrix();
        
        //vase strip
        glColor3f(.3,.1,0);
        glPushMatrix();
        glTranslatef(0.99,0.23,10);
        glScalef(0.01, 0.01, 0.1);
        drawCube();
        glPopMatrix();
        
        //vase strip
        glColor3f(.3,.1,0);
        glPushMatrix();
        glTranslatef(0.7,0.23,10.3);
        glScalef(0.1, 0.01, 0.01);
        drawCube();
        glPopMatrix();
        
        //flower stem
        glColor3f(0.133, 0.545, 0.133);
        glPushMatrix();
        glTranslatef(0.8,0.2,10.1);
        glScalef(0.01, 0.2, 0.01);
        drawCube();
        glPopMatrix();
        
        //flower petal
        glColor3f(0.294, 0.000, 0.510);
        glPushMatrix();
        glTranslatef(0.8,.8,10.1);
        glRotatef(210, 1,0,0);
        glScalef(0.04, 0.07, 0.04);
        drawPyramid();
        glPopMatrix();
        
        //flower petal
        glColor3f(0.294, 0.000, 0.510);
        glPushMatrix();
        glTranslatef(0.8,.8,10.1);
        glRotatef(280, 1,0,0);
        glScalef(0.04, 0.07, 0.04);
        drawPyramid();
        glPopMatrix();
        
        //flower petal
        glColor3f(0.294, 0.000, 0.510);
        glPushMatrix();
        glTranslatef(0.8,.81,10.1);
        glRotatef(340, 1,0,0);
        glScalef(0.04, 0.07, 0.04);
        drawPyramid();
        glPopMatrix();
        
        //flower petal
        glColor3f(0.294, 0.000, 0.510);
        glPushMatrix();
        glTranslatef(0.8,.81,10.1);
        glRotatef(50, 1,0,0);
        glScalef(0.04, 0.07, 0.04);
        drawPyramid();
        glPopMatrix();
        
        //flower petal
        glColor3f(0.294, 0.000, 0.510);
        glPushMatrix();
        glTranslatef(0.8,.81,10.1);
        glRotatef(120, 1,0,0);
        glScalef(0.04, 0.07, 0.04);
        drawPyramid();
        glPopMatrix();
    
        glPopMatrix();
        
    }
    