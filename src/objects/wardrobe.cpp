#include <GL/glew.h>   
#include <GL/glut.h> 
#include <bedroomObjects.h>
#include <simpleDraw.h>

void wardrobe(){
    //Guarda-Roupas
            
        glPushMatrix();
        glTranslatef(0, -0.2, -1.3);
    
            //cupboard
            glColor3f(0.5,0.2,0.2);
            glPushMatrix();
            glTranslatef(4,0,4.4);
            glScalef(0.5, 1, 0.5);
            drawCube();
            glPopMatrix();
            
            //cupboard's 1st vertical stripline
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(4,1,5.9);
            glScalef(0.5, 0.01, 0.0001);
            drawCube();
            glPopMatrix();
            
            //cupboard's 2nd vertical stripline
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(4,0.5,5.9);
            glScalef(0.5, 0.01, 0.0001);
            drawCube();
            glPopMatrix();
            
            //cupboard's last stripline
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(4,0,5.9);
            glScalef(0.5, 0.01, 0.0001);
            drawCube();
            glPopMatrix();
            
            //cupboard's lst horizontal stripline
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(5.5,0,5.9);
            glScalef(0.01, 1, 0.0001);
            drawCube();
            glPopMatrix();
            
            //cupboard's right side horizontal stripline
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(4.75,1,5.9);
            glScalef(0.01, 0.67, 0.0001);
            drawCube();
            glPopMatrix();
            
            //cupboard's left side horizontal stripline
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(4,0,5.9);
            glScalef(0.01, 1, 0.0001);
            drawCube();
            glPopMatrix();
            
            //cupboard's handle right
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(5,1.4,5.9);
            glScalef(0.02, 0.18, 0.0001);
            drawCube();
            glPopMatrix();
            
            //cupboard's handle left
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(4.5,1.4,5.9);
            glScalef(0.02, 0.18, 0.01);
            drawCube();
            glPopMatrix();
            
            //cupboard's drawer's 1st handle
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(4.5,0.7,5.9);
            glScalef(0.16, 0.02, 0.01);
            drawCube();
            glPopMatrix();
            
            //cupboard's drawer's 2nd handle
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(4.5,0.25,5.9);
            glScalef(0.16, 0.02, 0.01);
            drawCube();
            glPopMatrix();
    
        glPopMatrix();
    }
    