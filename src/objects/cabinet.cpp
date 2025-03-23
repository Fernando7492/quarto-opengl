#include <GL/glew.h>   
#include <GL/glut.h> 
#include <bedroomObjects.h>
#include <simpleDraw.h>

void cabinet(){
    //Armário
        glPushMatrix();
        glTranslatef(-1.1, -0.2, 0);
    
           //Cabinet
           glColor3f(0.3,0.1,0);
           glPushMatrix();
           glTranslatef(0,0,4);
           glScalef(0.12, 0.6, 0.4);
           drawCube();
           glPopMatrix();
           
           //Cabinet's 1st drawer
           glColor3f(0.5,0.2,0.2);
           glPushMatrix();
           glTranslatef(0.36,1.4,4.05);
           glScalef(0.0001, 0.11, 0.38);
           drawCube();
           glPopMatrix();
           
           //Cabinet's 2nd drawer
           glColor3f(0.5,0.2,0.2);
           glPushMatrix();
           glTranslatef(0.36,1,4.05);
           glScalef(0.0001, 0.11, 0.38);
           drawCube();
           glPopMatrix();
           
           //Cabinet's 3rd drawer
           glColor3f(0.5,0.2,0.2);
           glPushMatrix();
           glTranslatef(0.36,0.6,4.05);
           glScalef(0.0001, 0.11, 0.38);
           drawCube();
           glPopMatrix();
    
           //Cabinet's 4th drawer
           glColor3f(0.5,0.2,0.2);
           glPushMatrix();
           glTranslatef(0.36,0.2,4.05);;
           glScalef(0.0001, 0.11, 0.38);
           drawCube();
           glPopMatrix();
           
           //Cabinet's 1st drawer handle
           glColor3f(0.3,0.1,0);
           glPushMatrix();
           glTranslatef(0.37,1.5,4.3);
           glScalef(0.0001, 0.03, 0.2);
           drawCube();
           glPopMatrix();
           
           //Cabinet's 2nd drawer handle
           glColor3f(0.3,0.1,0);
           glPushMatrix();
           glTranslatef(0.37,1.1,4.3);
           glScalef(0.0001, 0.03, 0.2);
           drawCube();
           glPopMatrix();
           
           //Cabinet's 3rd drawer handle
           glColor3f(0.3,0.1,0);
           glPushMatrix();
           glTranslatef(0.37,0.7,4.3);
           glScalef(0.0001, 0.03, 0.2);
           drawCube();
           glPopMatrix();
           
           //Cabinet's 4th drawer handle
           glColor3f(0.3,0.1,0);
           glPushMatrix();
           glTranslatef(0.37,0.3,4.3);
           glScalef(0.0001, 0.03, 0.2);
           drawCube();
           glPopMatrix();
           
           //Cabinet left stripline
           glColor3f(0.5,0.2,0.2);
           glPushMatrix();
           glTranslatef(0.35,0,5.3);
           glScalef(0.01, 0.6, 0.0001);
           drawCube();
           glPopMatrix();
    
        glPopMatrix();
    }
    