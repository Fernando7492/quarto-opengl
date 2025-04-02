#include <GL/glew.h>   
#include <GL/glut.h> 
#include <bedroomObjects.h>
#include <simpleDraw.h>

void bed(){
        //Cama 
        glPushMatrix();
        glTranslatef(-0.98, 0, 0);
    
        //cabeceira
        glColor3f(0.5,0.2,0.2);
        glPushMatrix();
        glScalef(0.1, 0.5, 0.9);
        glTranslatef(-2,-0.5,6.2);
        drawCube();
        glPopMatrix();
        
        //cama
        glColor3f(0.824, 0.706, 0.549);
        glPushMatrix();
        glScalef(1, 0.2, 0.9);
        glTranslatef(0,-0.5,6.2);
        drawCube();
        glPopMatrix();
        
        //travesseiro direto
        glColor3f(0.627, 0.322, 0.176);
        glPushMatrix();
        glTranslatef(0.5,0.5,6);
        glRotatef(20, 0,0,1);
        glScalef(0.1, 0.15, 0.28);
        drawCube();
        glPopMatrix();
        
        //travesseiro esquerdo
        glColor3f(0.627, 0.322, 0.176);
        glPushMatrix();
        glTranslatef(0.5,0.5,7.2);
        glRotatef(22, 0,0,1);
        glScalef(0.1, 0.15, 0.28);
        drawCube();
        glPopMatrix();
        
        //colcha
        glColor3f(0.627, 0.322, 0.176);
        glPushMatrix();
        glTranslatef(1.4,0.45,5.5);
        glScalef(0.5, 0.05, 0.95);
        drawCube();
        glPopMatrix();
        
        //coberta
        glColor3f(0.627, 0.322, 0.176);
        glPushMatrix();
        glTranslatef(1.4,-0.3,8.15);
        glScalef(0.5, 0.25, 0.05);
        drawCube();
        glPopMatrix();
    
        glPopMatrix();
        
    }
    