#include <GL/glew.h>   
#include <GL/glut.h> 
#include <bedroomObjects.h>
#include <simpleDraw.h>

void dressingTable(){
    //Penteadeira
        glPushMatrix();
        glTranslatef(0, -0.2, -1.3);
    
            //dressing table left body
            glColor3f(0.545, 0.271, 0.075);
            glPushMatrix();
            glTranslatef(5.9,0,4.6);
            glScalef(0.2, 0.2, 0.2);
            drawCube();
            glPopMatrix();
            
            //dressing table left body left stripe
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(5.9,0,5.2);
            glScalef(0.01, 0.3, 0.0001);
            drawCube();
            glPopMatrix();
            
            //dressing table left body right stripe
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(6.5,0,5.2);
            glScalef(0.01, 0.2, 0.0001);
            drawCube();
            glPopMatrix();
            
            //dressing table left body bottom stripe
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(5.9,0,5.2);
            glScalef(0.2, 0.01, 0.0001);
            drawCube();
            glPopMatrix();
            
            //dressing table right body
            glColor3f(0.545, 0.271, 0.075);
            glPushMatrix();
            glTranslatef(7,0,4.6);
            glScalef(0.2, 0.2, 0.2);
            drawCube();
            glPopMatrix();
            
            //dressing table right body left stripe
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(7,0,5.2);
            glScalef(0.01, 0.2, 0.0001);
            drawCube();
            glPopMatrix();
            
            //dressing table right body right stripe
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(7.6,0,5.2);
            glScalef(0.01, 0.3, 0.0001);
            drawCube();
            glPopMatrix();
            
            //dressing table right body bottom stripe
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(7,0,5.2);
            glScalef(0.2, 0.01, 0.0001);
            drawCube();
            glPopMatrix();
            
            //dressing table upper body
            glColor3f(0.545, 0.271, 0.075);
            glPushMatrix();
            glTranslatef(5.9,0.6,4.6);
            glScalef(0.57, 0.1, 0.2);
            drawCube();
            glPopMatrix();
            
            //dressing table upper body bottom stripe
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(5.9,0.6,5.2);
            glScalef(0.57, 0.01, 0.0001);
            drawCube();
            glPopMatrix();
            
            //dressing table upper body upper stripe
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(5.9,0.9,5.2);
            glScalef(0.57, 0.01, 0.0001);
            drawCube();
            glPopMatrix();
            
            //dressing table upper body handle
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(6.5,0.75,5.2);
            glScalef(0.16, 0.02, 0.0001);
            drawCube();
            glPopMatrix();
            
            //dressing table left body handle
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(6.4,0.1,5.2);
            glScalef(0.02, 0.13, 0.0001);
            drawCube();
            glPopMatrix();
            
            //dressing table right body handle
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(7.1,0.1,5.2);
            glScalef(0.02, 0.13, 0.0001);
            drawCube();
            glPopMatrix();
            
            //dressing table main mirror
            glColor3f(0.690, 0.878, 0.902);
            glPushMatrix();
            glTranslatef(6.2,0.9,4.7);
            glScalef(0.36, 0.5, 0.0001);
            drawCube();
            glPopMatrix();
            
            //dressing table left mirror
            glColor3f(0.690, 0.878, 0.902);
            glPushMatrix();
            glTranslatef(5.92,0.9,4.7);
            glScalef(0.1, 0.48, 0.0001);
            drawCube();
            glPopMatrix();
            
            //dressing table left mirror left stripe
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(5.92,0.9,4.71);
            glScalef(0.019, 0.48, 0.0001);
            drawCube();
            glPopMatrix();
            
            //dressing table left mirror left stripe
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(6.17,0.9,4.71);
            glScalef(0.019, 0.48, 0.0001);
            drawCube();
            glPopMatrix();
            
            //dressing table mirror  stripe
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(5.92,0.9,4.71);
            glScalef(0.55, 0.019, 0.0001);
            drawCube();
            glPopMatrix();
            
            //dressing table left mirror upper stripe
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(5.92,2.3,4.71);
            glScalef(0.1, 0.019, 0.0001);
            drawCube();
            glPopMatrix();
            
            //dressing table right mirror
            glColor3f(0.690, 0.878, 0.902);
            glPushMatrix();
            glTranslatef(7.25,0.9,4.7);
            glScalef(0.1, 0.48, 0.0001);
            drawCube();
            glPopMatrix();
            
            //dressing table left mirror upper stripe
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(7.25,2.3,4.71);
            glScalef(0.1, 0.019, 0.0001);
            drawCube();
            glPopMatrix();
            
            //dressing table right mirror left stripe
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(7.25,0.9,4.71);
            glScalef(0.019, 0.48, 0.0001);
            drawCube();
            glPopMatrix();
            
            //dressing table right mirror right stripe
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(7.5,0.9,4.71);
            glScalef(0.019, 0.48, 0.0001);
            drawCube();
            glPopMatrix();
            
            //dressing table main mirror polygon part
            glColor3f(0.690, 0.878, 0.902);
            glPushMatrix();
            glTranslatef(6.2,2.4,4.7);
            glScalef(0.18, 0.18, 2);
            polygon();
            glPopMatrix();
            
            //dressing table upper round srtipe
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(6.2,2.4,4.71);
            glScalef(.18, .18, 1);
            polygonLine();
            glPopMatrix();
    
        glPopMatrix();
    }
    