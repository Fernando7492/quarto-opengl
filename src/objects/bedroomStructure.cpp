#include <GL/glew.h>   
#include <GL/glut.h> 
#include <bedroomObjects.h>
#include <simpleDraw.h>

void bedroomStructure(){
    //base do quarto
    
        // parede direira
        glColor3ub(135,206,250);
        glPushMatrix();
        glTranslatef(-1.5,-0.5, 2.7);
        glScalef(4, 2, 0.1);
        drawCube();
        glPopMatrix();
    
        // Parede esquerda
        glColor3ub(173,216,230);
        glPushMatrix();
        glTranslatef(-1.5, -0.5, 2.7);
        glScalef(0.1, 2, 3);
        drawCube();
        glPopMatrix();
        
        
       //teto
        glColor3ub(175,238,238);
        glPushMatrix();
        glTranslatef(-1.5,5.1,2.7);
        glScalef(4, 0.1, 3);
        drawCube();
        glPopMatrix();
    
        // chão
        glColor3ub(139,69,19);
        glPushMatrix();
        glScalef(3.9, 0.1, 2.92);
        glTranslatef(-0.31,-5,1);
        drawCube();
        glPopMatrix();
    
        // carpete
        glColor3f(0.4, 0.1, 0.0);
        glPushMatrix();
        glTranslatef(2,-0.2,5);
        glScalef(1.3, 0.01, 1.7);
        drawCube();
        glPopMatrix();
    }
    