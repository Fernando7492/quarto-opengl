#include <GL/glew.h>   
#include <GL/glut.h> 
#include <bedroomObjects.h>
#include <simpleDraw.h>

void rack(){
    //Prateleiras
          
          //prateleira 1
          glColor3f(0.2,0.1,0.1);
          glPushMatrix();
          glTranslatef(1.5,3.3,3);
          glScalef(0.4, 0.03, 0.2);
          drawCube();
          glPopMatrix();
          
          //prateleira 2
          glColor3f(0.2,0.1,0.1);
          glPushMatrix();
          glTranslatef(0.8,2.8,3);
          glScalef(0.4, 0.03, 0.2);
          drawCube();
          glPopMatrix();
          
          //prateleira 3
          glColor3f(0.2,0.1,0.1);
          glPushMatrix();
          glTranslatef(0,2.2,3);
          glScalef(0.4, 0.03, 0.2);
          drawCube();
          glPopMatrix();
          
          //prateleira 4
          glColor3f(0.2,0.1,0.1);
          glPushMatrix();
          glTranslatef(1,1.7,3);
          glScalef(0.4, 0.03, 0.2);
          drawCube();
          glPopMatrix();
          
          //prateleira 5
          glColor3f(0.2,0.1,0.1);
          glPushMatrix();
          glTranslatef(1.7,1.1,3);
          glScalef(0.5, 0.03, 0.2);
          drawCube();
          glPopMatrix();
    
        //prateleira 1 - peça 1
          glColor3f(0,0,.9);
          glPushMatrix();
          glTranslatef(1.8,3.31,3.2);
          glScalef(0.16, 0.1, 0.05);
          drawCube();
          glPopMatrix();
    
          //prateleira 1 - peça 2
          glColor3f(0.502, 0.502, 0.000);
          glPushMatrix();
          glTranslatef(2.5,3.31,3.2);
          glScalef(0.05, 0.16, 0.05);
          drawCube();
          glPopMatrix();  
          
          //prateleira 2 - peça única
          glColor3f(.416, 0.353, 0.804);
          glPushMatrix();
          glTranslatef(1.2,2.9,3.3);
          glScalef(0.16, 0.09, 0.05);
          drawCube();
          glPopMatrix();
          
          //prateleira 3 - peça 1
          glColor3f(0.863, 0.078, 0.235);
          glPushMatrix();
          glTranslatef(0.2,2.21,3.2);
          glScalef(0.05, 0.16, 0.1);
          drawCube();
          glPopMatrix();
          
          //prateleira 3 - peça 2
          glColor3f(0.780, 0.082, 0.522);
          glPushMatrix();
          glTranslatef(0.5,2.21,3.2);
          glScalef(0.05, 0.12, 0.1);
          drawCube();
          glPopMatrix();
          
          //prateleira 3 - peça 3
          glColor3f(0.600, 0.196, 0.800);
          glPushMatrix();
          glTranslatef(0.8,2.21,3.2);
          glScalef(0.05, 0.09, 0.1);
          drawCube();
          glPopMatrix();
          
          //prateleira 4 - peça 2
          glColor3f(0.282, 0.239, 0.545);
          glPushMatrix();
          glTranslatef(1.8,1.71,3);
          glScalef(0.2, 0.1, 0.2);
          drawPyramid();
          glPopMatrix();
          
          //prateleira 4 - peça 1
          glColor3ub(0,0,139);
          glPushMatrix();
          glTranslatef(1.4,1.71,3);
          glScalef(0.15, 0.1, 0.2);
          drawPyramid();
          glPopMatrix();
    
          //prateleira 5 - peça 1
          glColor3f(0.698, 0.133, 0.133);
          glPushMatrix();
          glTranslatef(1.9,1.2,3);
          glScalef(0.06, 0.06, 0.2);
          drawCube();
          glPopMatrix();
          
          //prateleira 5 - peça 2
          glColor3f(0.729, 0.333, 0.827);
          glPushMatrix();
          glTranslatef(2.4,1.2,3);
          glScalef(0.06, 0.06, 0.2);
          drawCube();
          glPopMatrix();
          
          //prateleira 5 - peça 3
          glColor3f(0.098, 0.098, 0.439);
          glPushMatrix();
          glTranslatef(2.9,1.2,3);
          glScalef(0.06, 0.06, 0.2);
          drawCube();
          glPopMatrix();
    
    }
    