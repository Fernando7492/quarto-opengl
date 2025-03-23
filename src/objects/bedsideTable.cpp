#include <GL/glew.h>   
#include <GL/glut.h> 
#include <bedroomObjects.h>
#include <simpleDraw.h>

void bedsideTable(){
    //Criado Mudo
    
        glPushMatrix();
        glTranslatef(-1.61, -0.1, 0);
          //side drawer
          glColor3f(0.2,0.1,0.1); //0.5,0.2,0.2
          glPushMatrix();
          glTranslatef(0.5,-0.1,8.7); //0.5,-0.1,9
          //glRotatef(22, 0,0,1);
          glScalef(0.12, 0.2, 0.23);
          drawCube();
          glPopMatrix();
          
          //side drawer's drawer
          glColor3f(0.3,0.2,0.2);
          glPushMatrix();
          glTranslatef(0.88,0,8.8);
          //glRotatef(22, 0,0,1);
          glScalef(0.0001, 0.11, 0.18);
          drawCube();
          glPopMatrix();
          
          //side drawer's knob
          glColor3f(0.3, 0.1, 0.0);
          glPushMatrix();
          glTranslatef(0.9,0.1,9);
          glScalef(0.0001, 0.04, 0.04);
          drawCube();
          glPopMatrix();
    
        glPopMatrix();
    }
    
    