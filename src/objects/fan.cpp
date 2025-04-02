#include <GL/glew.h>   
#include <GL/glut.h> 
#include <bedroomObjects.h>
#include <simpleDraw.h>

//double a=2;
//GLboolean fanSwitch = false;

void fan(){
    //ventilador
    
        glPushMatrix();
        glTranslatef(3,4,8);
        
        //base
        glColor3f(0.2,0.1,0.1);
        glPushMatrix();
        glTranslatef(-0.02,0,-0.02);
        glScalef(0.01,0.4,0.01);
        drawCube();
        glPopMatrix();
        
        //quadrado
        glColor3f(0.5,0.2,0.2);
        glPushMatrix();
        glScalef(0.1,0.05,0.1);
        glTranslatef(-1.5,-1.5,-1.5);
        drawCube();
        glPopMatrix();
        
        glPushMatrix();
        glRotatef(a, 0,1,0);
        
        //helice 1
        glColor3f(0.8,0.6,0.4);
        glPushMatrix();
        glScalef(0.5,0.01,0.1);
        glTranslatef(-1.5,-1.5,-1.5);
        drawCube();
        glPopMatrix();
        
        //helice 2
        glColor3f(0.8,0.6,0.4);
        glPushMatrix();
        glScalef(0.1,0.01,0.5);
        glTranslatef(-1.5,-1.5,-1.5);
        drawCube();
        glPopMatrix();
        
        glPopMatrix();
        
        glPopMatrix();
    }

void animateFan()
{
    
    if(fanSwitch == true){
    a+= 5;
            if(a > 360)
                a -= 360;
    }
    else{
        a = a;
    }
    
    glutPostRedisplay();

}
    