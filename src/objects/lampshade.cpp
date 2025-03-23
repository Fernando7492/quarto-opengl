#include <GL/glew.h>   
#include <GL/glut.h> 
#include <bedroomObjects.h>
#include <simpleDraw.h>

void lampshade(){
    //Lamp 
        glPushMatrix();
        glTranslatef(-0.5, 0, -4.5);
    
            //base
            glColor3ub(0,0,0);
            glPushMatrix();
            glTranslatef(0.6,-0.2,9.1);
            glScalef(0.2, 0.02, 0.2);
            drawCube();
            glPopMatrix();
            
            //haste
            glColor3ub(0,0,0);
            glPushMatrix();
            glTranslatef(0.9,-0.2,9.4);
            glScalef(0.01, 0.9, 0.01);
            drawCube();
            glPopMatrix();
            
            //lampada
            glColor3ub(255,255,0);
            glPushMatrix();
            glTranslatef(0.6,2.5,9.1);
            glScalef(0.2, 0.09, 0.2);
            drawCube();
            glPopMatrix();
    
        glPopMatrix();
            
    }
    