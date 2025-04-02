#include <GL/glew.h>   
#include <GL/glut.h> 
#include <bedroomObjects.h>
#include <simpleDraw.h>

void myClock(){
        //Relógio
        glPushMatrix();
        glTranslatef(-0.23, 0, 0);
    
            //clock body
            glColor3f(0.545, 0.271, 0.075);
            glPushMatrix();
            glTranslatef(-0.9,1.8,7.87);
            glScalef(0.08, 0.25, 0.1);
            drawCube();
            glPopMatrix();
            
            //clock body white
            glColor3f(1.000, 0.894, 0.710);
            glPushMatrix();
            glTranslatef(-0.83,1.9,7.9);
            glScalef(0.06, 0.2, 0.08);
            drawCube();
            glPopMatrix();
            
            //clock hour handle
            glColor3f(0,0,0);
            glPushMatrix();
            glTranslatef(-0.65,2.18,8.01);
            glRotatef(45, 1,0,0);
            glScalef(0.0001, 0.01, 0.04);
            drawCube();
            glPopMatrix();
            
           //clock minute handle
            glColor3f(0,0,0);
            glPushMatrix();
            glTranslatef(-0.65,2.18,8.01);
            glRotatef(90, 1,0,0);
            glScalef(0.0001, 0.012, 0.08);
            drawCube();
            glPopMatrix();
            
            //clock body bottom strip
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(-0.66,1.8,7.89);
            glScalef(0.001, 0.01, 0.1);
            drawCube();
            glPopMatrix();
            
            //clock body right strip
            glColor3f(0.0,0.0,0.0);
            glPushMatrix();
            glTranslatef(-0.66,1.8,7.89);
            glScalef(0.005, 0.25, 0.01);
            drawCube();
            glPopMatrix();
            
            //clock body left strip
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(-0.65,1.8,8.2);
            glScalef(0.0001, 0.25, 0.01);
            drawCube();
            glPopMatrix();
    
            //clock pendulum stick
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(-0.7,2,8.1);
            glRotatef(theta, 1,0,0);
            glScalef(0.0001, 0.2, 0.03);
            drawCube();
            glPopMatrix();
            
            //clock pendulum ball
            glColor3f(0.2,0.1,0.1);
            glPushMatrix();
            glTranslatef(-0.72,1.42,z);
            glScalef(0.035, 0.035, 0.035);
            drawCube();
            glPopMatrix();
            
            //clock top pyramid
            glColor3f(0.5, 0.2, 0);
            glPushMatrix();
            glTranslatef(-0.9,2.5,7.87);
            glScalef(0.2, 0.1, 0.2);
            drawPyramid();
            glPopMatrix();
        glPopMatrix();
    }

void animateClock(){
    if(redFlag == true)
    {
        theta+=2;
        z-=0.02;
        if(theta >= 196 && theta <= 210)
        {
            y = 1.44;
        }
        else if(theta >= 180 && theta <= 194)
        {
            y = 1.42;
        }
        else if(theta >= 180 && theta <= 194)
        {
            y = 1.4;
        }
        else if(theta >= 164 && theta <= 178)
        {
            y = 1.42;
        }
        
        if(theta == 210)
        {
            redFlag = false;
        }
    }
    else if(redFlag == false)
    {
        theta-=2;
        z+=0.02;
        
        if(theta >= 196 && theta <= 210)
        {
            y = 1.44;
        }
        else if(theta >= 180 && theta <= 194)
        {
            y = 1.42;
        }
        else if(theta >= 180 && theta <= 194)
        {
            y = 1.4;
        }
        else if(theta >= 164 && theta <= 178)
        {
            y = 1.42;
        }
        
        if(theta == 150)
        {
            redFlag = true;
        }
    }
}