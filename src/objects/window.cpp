#include <GL/glew.h>   
#include <GL/glut.h> 
#include <bedroomObjects.h>
#include <simpleDraw.h>

void window(){
    //Janela
        glPushMatrix();
        glTranslatef(-0.23, 0.5, -2.3);
    
        //window white open
        glColor3f(1.0,1.0,1.0);
        glPushMatrix();
        glTranslatef(-0.9,1,8.9);
        glScalef(0.0001, .6, .3);
        drawCube();
        glPopMatrix();
        
        //window side corner
        glColor3f(0.8,0.6,0.4);
        glPushMatrix();
        glTranslatef(-0.9,1,8.9);
        glScalef(0.04, 0.6, 0.0001);
        drawCube();
        glPopMatrix();
        
        //window left side corner
        glColor3f(0.8,0.6,0.4);
        glPushMatrix();
        glTranslatef(-0.9,1,9.8);
        glScalef(0.04, 0.6, 0.0001);
        drawCube();
        glPopMatrix();
        
        //window upper side corner
        glColor3f(0.7,0.6,0.5);
        glPushMatrix();
        glTranslatef(-0.8,2.7,8.75);
        glScalef(0.0001, 0.05, 0.4);
        drawCube();
        glPopMatrix();
        
        
        //window lower side corner
        glColor3f(0.7,0.6,0.5);
        glPushMatrix();
        glTranslatef(-0.8,1.02,8.75);
        glScalef(0.0001, 0.05, 0.4);
        drawCube();
        glPopMatrix();
        
        //window vertical bar 1
        glColor3f(0.0,0.0,0.0);
        glPushMatrix();
        glTranslatef(-0.87,2.1,8.9);
        glScalef(0.0001, 0.02, 0.3);
        drawCube();
        glPopMatrix();
        
        //window vertical bar 2
        glColor3f(0.0,0.0,0.0);
        glPushMatrix();
        glTranslatef(-0.87,1.6,8.9);
        glScalef(0.0001, 0.02, 0.3);
        drawCube();
        glPopMatrix();
        
        //window horizontal bar
        glColor3f(0.0,0.0,0.0);
        glPushMatrix();
        glTranslatef(-0.87,1,9.3);
        glScalef(0.0001, 0.6, 0.02);
        drawCube();
        glPopMatrix();
    
        glPopMatrix();
    }
    