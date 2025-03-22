#define GL_SILENCE_DEPRECATION
#include <GL/glew.h>   
#include <GL/glut.h> 
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

GLboolean redFlag = true, fanSwitch = false;
double windowHeight=800, windowWidth=600;
double eyeX=7.0, eyeY=2.0, eyeZ=15.0, refX = 0, refY=0,refZ=0;
double theta = 180.0, y = 1.36, z = 7.97888, a=2;

static GLfloat v_cube[8][3] = {
    {0.0, 0.0, 0.0}, //0
    {0.0, 0.0, 3.0}, //1
    {3.0, 0.0, 3.0}, //2
    {3.0, 0.0, 0.0}, //3
    {0.0, 3.0, 0.0}, //4
    {0.0, 3.0, 3.0}, //5
    {3.0, 3.0, 3.0}, //6
    {3.0, 3.0, 0.0}  //7
};

static GLubyte quadIndices[6][4] = {
    {0, 1, 2, 3}, //bottom
    {4, 5, 6, 7}, //top
    {5, 1, 2, 6}, //front
    {0, 4, 7, 3}, // back is clockwise
    {2, 3, 7, 6}, //right
    {1, 5, 4, 0}  //left is clockwise
};


static GLfloat colors[6][3] = {
    {0.4, 0.1, 0.0}, //bottom
    {0.6, 0.0, 0.7}, //top
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 1.0},
    {0.8, 0.0, 0.0},
    {0.3, 0.6, 0.7}
};



void drawCube() {
    glBegin(GL_QUADS);
    for (GLint i = 0; i <6; i++)
    {
        glVertex3fv(&v_cube[quadIndices[i][0]][0]);
        glVertex3fv(&v_cube[quadIndices[i][1]][0]);
        glVertex3fv(&v_cube[quadIndices[i][2]][0]);
        glVertex3fv(&v_cube[quadIndices[i][3]][0]);
    }
    glEnd();
}

static GLfloat v_pyramid[5][3] = {
    {0.0, 0.0, 0.0},
    {0.0, 0.0, 2.0},
    {2.0, 0.0, 2.0},
    {2.0, 0.0, 0.0},
    {1.0, 4.0, 1.0}
};

static GLubyte p_Indices[4][3] = {
    {4, 1, 2},
    {4, 2, 3},
    {4, 3, 0},
    {4, 0, 1}
};

static GLubyte PquadIndices[1][4] = {
    {0, 3, 2, 1}
};

void drawpyramid(){
    glBegin(GL_TRIANGLES);
    for (GLint i = 0; i <4; i++)
    {
        glVertex3fv(&v_pyramid[p_Indices[i][0]][0]);
        glVertex3fv(&v_pyramid[p_Indices[i][1]][0]);
        glVertex3fv(&v_pyramid[p_Indices[i][2]][0]);
    }
    glEnd();

    glBegin(GL_QUADS);
    for (GLint i = 0; i <1; i++)
    {
        glVertex3fv(&v_pyramid[PquadIndices[i][0]][0]);
        glVertex3fv(&v_pyramid[PquadIndices[i][1]][0]);
        glVertex3fv(&v_pyramid[PquadIndices[i][2]][0]);
        glVertex3fv(&v_pyramid[PquadIndices[i][3]][0]);
    }
    glEnd();

}

void polygon(){
    glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(6,0);
    glVertex2f(5.8,1);
    glVertex2f(5.2,2);
    glVertex2f(5, 2.2);
    glVertex2f(4, 2.8);
    glVertex2f(3,3);
    glVertex2f(2, 2.8);
    glVertex2f(1, 2.2);
    glVertex2f(0.8, 2);
    glVertex2f(0.2,1);
    
    glEnd();
}

void polygonLine(){
    glBegin(GL_LINE_STRIP);
    //glVertex2f(0,0);
    glVertex2f(6,0);
    glVertex2f(5.8,1);
    glVertex2f(5.2,2);
    glVertex2f(5, 2.2);
    glVertex2f(4, 2.8);
    glVertex2f(3,3);
    glVertex2f(2, 2.8);
    glVertex2f(1, 2.2);
    glVertex2f(0.8, 2);
    glVertex2f(0.2,1);
    glVertex2f(0,0);
    
    glEnd();
}

void guardaRoupas(){
//Guarda-Roupas
        
    glPushMatrix();
    glTranslatef(0, -0.2, -1.3);

        //cupboard
        glColor3f(0.5,0.2,0.2);
        glPushMatrix();
        glTranslatef(4,0,4.4);
        //glRotatef(22, 0,0,1);
        glScalef(0.5, 1, 0.5);
        drawCube();
        glPopMatrix();
        
        //cupboard's 1st vertical stripline
        glColor3f(0.2,0.1,0.1);
        glPushMatrix();
        glTranslatef(4,1,5.9);
        //glRotatef(22, 0,0,1);
        glScalef(0.5, 0.01, 0.0001);
        drawCube();
        glPopMatrix();
        
        //cupboard's 2nd vertical stripline
        glColor3f(0.2,0.1,0.1);
        glPushMatrix();
        glTranslatef(4,0.5,5.9);
        //glRotatef(22, 0,0,1);
        glScalef(0.5, 0.01, 0.0001);
        drawCube();
        glPopMatrix();
        
        //cupboard's last stripline
        glColor3f(0.2,0.1,0.1);
        glPushMatrix();
        glTranslatef(4,0,5.9);
        //glRotatef(22, 0,0,1);
        glScalef(0.5, 0.01, 0.0001);
        drawCube();
        glPopMatrix();
        
        //cupboard's lst horizontal stripline
        glColor3f(0.2,0.1,0.1);
        glPushMatrix();
        glTranslatef(5.5,0,5.9);
        //glRotatef(22, 0,0,1);
        glScalef(0.01, 1, 0.0001);
        drawCube();
        glPopMatrix();
        
        //cupboard's right side horizontal stripline
        glColor3f(0.2,0.1,0.1);
        glPushMatrix();
        glTranslatef(4.75,1,5.9);
        //glRotatef(22, 0,0,1);
        glScalef(0.01, 0.67, 0.0001);
        drawCube();
        glPopMatrix();
        
        //cupboard's left side horizontal stripline
        glColor3f(0.2,0.1,0.1);
        glPushMatrix();
        glTranslatef(4,0,5.9);
        //glRotatef(22, 0,0,1);
        glScalef(0.01, 1, 0.0001);
        drawCube();
        glPopMatrix();
        
        //cupboard's handle right
        glColor3f(0.2,0.1,0.1);
        glPushMatrix();
        glTranslatef(5,1.4,5.9);
        //glRotatef(22, 0,0,1);
        glScalef(0.02, 0.18, 0.0001);
        drawCube();
        glPopMatrix();
        
        //cupboard's handle left
        glColor3f(0.2,0.1,0.1);
        glPushMatrix();
        glTranslatef(4.5,1.4,5.9);
        //glRotatef(22, 0,0,1);
        glScalef(0.02, 0.18, 0.01);
        drawCube();
        glPopMatrix();
        
        //cupboard's drawer's 1st handle
        glColor3f(0.2,0.1,0.1);
        glPushMatrix();
        glTranslatef(4.5,0.7,5.9);
        //glRotatef(22, 0,0,1);
        glScalef(0.16, 0.02, 0.01);
        drawCube();
        glPopMatrix();
        
        //cupboard's drawer's 2nd handle
        glColor3f(0.2,0.1,0.1);
        glPushMatrix();
        glTranslatef(4.5,0.25,5.9);
        //glRotatef(22, 0,0,1);
        glScalef(0.16, 0.02, 0.01);
        drawCube();
        glPopMatrix();

    glPopMatrix();
}


void criadoMudo(){
//Criado Mudo
      
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
      //glRotatef(22, 0,0,1);
      glScalef(0.0001, 0.04, 0.04);
      drawCube();
      glPopMatrix();
}


void cama(){
//Cama 

    //bed headboard
    glColor3f(0.5,0.2,0.2);
    glPushMatrix();
    glScalef(0.1, 0.5, 0.9);
    glTranslatef(-2,-0.5,6);
    drawCube();
    glPopMatrix();
    
    //bed body
    glColor3f(0.824, 0.706, 0.549);
    glPushMatrix();
    glScalef(1, 0.2, 0.9); //1, 0.2, 0.9
    glTranslatef(0,-0.5,6.2);
    drawCube();
    glPopMatrix();
    
    //pillow right far
    glColor3f(0.627, 0.322, 0.176);
    glPushMatrix();
    glTranslatef(0.5,0.5,6);
    glRotatef(20, 0,0,1);
    glScalef(0.1, 0.15, 0.28);
    drawCube();
    glPopMatrix();
    
    //pillow left near
    glColor3f(0.627, 0.322, 0.176);
    glPushMatrix();
    glTranslatef(0.5,0.5,7.2);
    glRotatef(22, 0,0,1);
    glScalef(0.1, 0.15, 0.28);
    drawCube();
    glPopMatrix();
    
    //blanket
    glColor3f(0.627, 0.322, 0.176);
    glPushMatrix();
    glTranslatef(1.4,0.45,5.5);
    //glRotatef(22, 0,0,1);
    glScalef(0.5, 0.05, 0.95);
    drawCube();
    glPopMatrix();
    
    //blanket side left part
    glColor3f(0.627, 0.322, 0.176);
    glPushMatrix();
    glTranslatef(1.4,-0.3,8.15);
    //glRotatef(22, 0,0,1);
    glScalef(0.5, 0.25, 0.05);
    drawCube();
    glPopMatrix();
    
}

void lampada(){
//Lamp 
        
        //lamp base
        glColor3f(0,0,1);
        glPushMatrix();
        glTranslatef(.6,0.5,9.1);
        glScalef(0.07, 0.02, 0.07);
        drawCube();
        glPopMatrix();
        
        //lamp stand
        glColor3f(1,0,0);
        glPushMatrix();
        glTranslatef(.7,0.35,9.2);
        glScalef(0.01, 0.2, 0.01);
        drawCube();
        glPopMatrix();
        
        //lamp shade
        glColor3f(0.000, 0.000, 0.545);
        glPushMatrix();
        glTranslatef(.7,0.9,9.2);
        glScalef(0.08, 0.09, 0.08);
        drawCube();
        glPopMatrix();
        
}


void base(){
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
}

void flor(){
//Vaso de flor
        
    //vase
    glColor3f(0.545, 0.271, 0.075);
    glPushMatrix();
    glTranslatef(.7,0,10);
    //glRotatef(22, 0,0,1);
    glScalef(0.1, 0.1, 0.1);
    drawCube();
    glPopMatrix();
    
    //vase strip
    glColor3f(.3,.1,0);
    glPushMatrix();
    glTranslatef(0.99,0.23,10);
    //glRotatef(22, 0,0,1);
    glScalef(0.01, 0.01, 0.1);
    drawCube();
    glPopMatrix();
    
    //vase strip
    glColor3f(.3,.1,0);
    glPushMatrix();
    glTranslatef(0.7,0.23,10.3);
    //glRotatef(22, 0,0,1);
    glScalef(0.1, 0.01, 0.01);
    drawCube();
    glPopMatrix();
    
    //flower stem
    glColor3f(0.133, 0.545, 0.133);
    glPushMatrix();
    glTranslatef(0.8,0.2,10.1);
    glScalef(0.01, 0.2, 0.01);
    drawCube();
    glPopMatrix();
    
    //flower petal
    glColor3f(0.294, 0.000, 0.510);
    glPushMatrix();
    glTranslatef(0.8,.8,10.1);
    glRotatef(210, 1,0,0);
    glScalef(0.04, 0.07, 0.04);
    drawpyramid();
    glPopMatrix();
    
    //flower petal
    glColor3f(0.294, 0.000, 0.510);
    glPushMatrix();
    glTranslatef(0.8,.8,10.1);
    glRotatef(280, 1,0,0);
    glScalef(0.04, 0.07, 0.04);
    drawpyramid();
    glPopMatrix();
    
    //flower petal
    glColor3f(0.294, 0.000, 0.510);
    glPushMatrix();
    glTranslatef(0.8,.81,10.1);
    glRotatef(340, 1,0,0);
    glScalef(0.04, 0.07, 0.04);
    drawpyramid();
    glPopMatrix();
    
    //flower petal
    glColor3f(0.294, 0.000, 0.510);
    glPushMatrix();
    glTranslatef(0.8,.81,10.1);
    glRotatef(50, 1,0,0);
    glScalef(0.04, 0.07, 0.04);
    drawpyramid();
    glPopMatrix();
    
    //flower petal
    glColor3f(0.294, 0.000, 0.510);
    glPushMatrix();
    glTranslatef(0.8,.81,10.1);
    glRotatef(120, 1,0,0);
    glScalef(0.04, 0.07, 0.04);
    drawpyramid();
    glPopMatrix();
    
}

void prateleiras(){
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
      drawpyramid();
      glPopMatrix();
      
      //prateleira 4 - peça 1
      glColor3ub(0,0,139);
      glPushMatrix();
      glTranslatef(1.4,1.71,3);
      glScalef(0.15, 0.1, 0.2);
      drawpyramid();
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

void armario(){
//Armário
    glPushMatrix();
    glTranslatef(0, -0.2, 0);

       //wardrobe
       glColor3f(0.3,0.1,0);
       glPushMatrix();
       glTranslatef(0,0,4);
       glScalef(0.12, 0.6, 0.4);
       drawCube();
       glPopMatrix();
       
       //wardrobe's 1st drawer
       glColor3f(0.5,0.2,0.2);
       glPushMatrix();
       glTranslatef(0.36,1.4,4.05);
       //glRotatef(22, 0,0,1);
       glScalef(0.0001, 0.11, 0.38);
       drawCube();
       glPopMatrix();
       
       //wardrobe's 2nd drawer
       glColor3f(0.5,0.2,0.2);
       glPushMatrix();
       glTranslatef(0.36,1,4.05);
       //glRotatef(22, 0,0,1);
       glScalef(0.0001, 0.11, 0.38);
       drawCube();
       glPopMatrix();
       
       //wardrobe's 3rd drawer
       glColor3f(0.5,0.2,0.2);
       glPushMatrix();
       glTranslatef(0.36,0.6,4.05);
       //glRotatef(22, 0,0,1);
       glScalef(0.0001, 0.11, 0.38);
       drawCube();
       glPopMatrix();

       //wardrobe's 4th drawer
       glColor3f(0.5,0.2,0.2);
       glPushMatrix();
       glTranslatef(0.36,0.2,4.05);
       //glRotatef(22, 0,0,1);
       glScalef(0.0001, 0.11, 0.38);
       drawCube();
       glPopMatrix();
       
       //wardrobe's 1st drawer handle
       glColor3f(0.3,0.1,0);
       glPushMatrix();
       glTranslatef(0.37,1.5,4.3);
       //glRotatef(22, 0,0,1);
       glScalef(0.0001, 0.03, 0.2);
       drawCube();
       glPopMatrix();
       
       //wardrobe's 2nd drawer handle
       glColor3f(0.3,0.1,0);
       glPushMatrix();
       glTranslatef(0.37,1.1,4.3);
       //glRotatef(22, 0,0,1);
       glScalef(0.0001, 0.03, 0.2);
       drawCube();
       glPopMatrix();
       
       //wardrobe's 3rd drawer handle
       glColor3f(0.3,0.1,0);
       glPushMatrix();
       glTranslatef(0.37,0.7,4.3);
       //glRotatef(22, 0,0,1);
       glScalef(0.0001, 0.03, 0.2);
       drawCube();
       glPopMatrix();
       
       //wardrobe's 4th drawer handle
       glColor3f(0.3,0.1,0);
       glPushMatrix();
       glTranslatef(0.37,0.3,4.3);
       //glRotatef(22, 0,0,1);
       glScalef(0.0001, 0.03, 0.2);
       drawCube();
       glPopMatrix();
       
       //wardrobe left stripline
       glColor3f(0.5,0.2,0.2);
       glPushMatrix();
       glTranslatef(0.35,0,5.3);
       //glRotatef(22, 0,0,1);
       glScalef(0.01, 0.6, 0.0001);
       drawCube();
       glPopMatrix();

    glPopMatrix();
}

void janela(){
//Janela
    glPushMatrix();
    glTranslatef(-0.23, 0, 0);

    //window white open
    glColor3f(1.0,1.0,1.0);
    glPushMatrix();
    glTranslatef(-0.9,1,8.9);
    glScalef(0.0001, .6, .3);
    drawCube();
    glPopMatrix();
    
    //window side corner
    glColor3f(0.8,0.6,0.4);
    glPushMatrix();
    glTranslatef(-0.9,1,8.9);
    glScalef(0.04, 0.6, 0.0001);
    drawCube();
    glPopMatrix();
    
    //window left side corner
    glColor3f(0.8,0.6,0.4);
    glPushMatrix();
    glTranslatef(-0.9,1,9.8);
    glScalef(0.04, 0.6, 0.0001);
    drawCube();
    glPopMatrix();
    
    //window upper side corner
    glColor3f(0.7,0.6,0.5);
    glPushMatrix();
    glTranslatef(-0.8,2.7,8.75);
    glScalef(0.0001, 0.05, 0.4);
    drawCube();
    glPopMatrix();
    
    
    //window lower side corner
    glColor3f(0.7,0.6,0.5);
    glPushMatrix();
    glTranslatef(-0.8,1.02,8.75);
    glScalef(0.0001, 0.05, 0.4);
    drawCube();
    glPopMatrix();
    
    //window vertical bar 1
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glTranslatef(-0.87,2.1,8.9);
    //glRotatef(22, 0,0,1);
    glScalef(0.0001, 0.02, 0.3);
    drawCube();
    glPopMatrix();
    
    //window vertical bar 2
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glTranslatef(-0.87,1.6,8.9);
    //glRotatef(22, 0,0,1);
    glScalef(0.0001, 0.02, 0.3);
    drawCube();
    glPopMatrix();
    
    //window horizontal bar
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glTranslatef(-0.87,1,9.3);
    //glRotatef(22, 0,0,1);
    glScalef(0.0001, 0.6, 0.02);
    drawCube();
    glPopMatrix();

    glPopMatrix();
}

void fan(){
//ventilador

    glPushMatrix();
    glTranslatef(3,4,8);
    
    //stand
    glColor3f(0.2,0.1,0.1);
    glPushMatrix();
    glTranslatef(0.1,0,0.09);
    glScalef(0.01,0.4,0.01);
    //glTranslatef(-1.5,-1.5,-1.5);
    drawCube();
    glPopMatrix();
    
    //fan cube
    glColor3f(0.5,0.2,0.2);
    glPushMatrix();
    glScalef(0.1,0.05,0.1);
    glTranslatef(-1.5,-1.5,-1.5);
    drawCube();
    glPopMatrix();
    
    glPushMatrix();
    glRotatef(a, 0,1,0);
    
    //blade 1 blue
    glColor3f(0.8,0.6,0.4);
    glPushMatrix();
    //glRotatef(a, 0,1,0);
    glScalef(0.5,0.01,0.1);
    glTranslatef(-1.5,-1.5,-1.5);
    drawCube();
    glPopMatrix();
    
    //blade 2 purple
    glColor3f(0.8,0.6,0.4);
    glPushMatrix();
    //glRotatef(a, 0,1,0);
    glScalef(0.1,0.01,0.5);
    glTranslatef(-1.5,-1.5,-1.5);
    drawCube();
    glPopMatrix();
    
    glPopMatrix();
    
    glPopMatrix();
}

void penteadeira(){
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

void relogio(){
//Relógio
        
        //clock body
        glColor3f(0.545, 0.271, 0.075);
        glPushMatrix();
        glTranslatef(-0.9,1.8,7.87);
        //glRotatef(22, 0,0,1);
        glScalef(0.08, 0.25, 0.1);
        drawCube();
        glPopMatrix();
        
        //clock body white
        glColor3f(1.000, 0.894, 0.710);
        glPushMatrix();
        glTranslatef(-0.83,1.9,7.9);
        //glRotatef(22, 0,0,1);
        glScalef(0.06, 0.2, 0.08);
        drawCube();
        glPopMatrix();
        
        //clock hour handle
        glColor3f(0,0,0); //0.2,0.1,0.1
        glPushMatrix();
        glTranslatef(-0.65,2.18,8.01);
        glRotatef(45, 1,0,0);
        glScalef(0.0001, 0.01, 0.04);
        drawCube();
        glPopMatrix();
        
       //clock minute handle
        glColor3f(0,0,0); //0.2,0.1,0.1
        glPushMatrix();
        glTranslatef(-0.65,2.18,8.01);
        glRotatef(90, 1,0,0);
        glScalef(0.0001, 0.012, 0.08);
        drawCube();
        glPopMatrix();
        
        //clock body bottom strip
        glColor3f(0.2,0.1,0.1); //0.2,0.1,0.1
        glPushMatrix();
        glTranslatef(-0.66,1.8,7.89);
        //glRotatef(22, 0,0,1);
        glScalef(0.001, 0.01, 0.1);
        drawCube();
        glPopMatrix();
        
        //clock body right strip
        glColor3f(0.0,0.0,0.0); //0.2,0.1,0.1
        glPushMatrix();
        glTranslatef(-0.66,1.8,7.89);
        //glRotatef(22, 0,0,1);
        glScalef(0.005, 0.25, 0.01);
        drawCube();
        glPopMatrix();
        
        //clock body left strip
        glColor3f(0.2,0.1,0.1); //0.2,0.1,0.1
        glPushMatrix();
        glTranslatef(-0.65,1.8,8.2);
        //glRotatef(22, 0,0,1);
        glScalef(0.0001, 0.25, 0.01);
        drawCube();
        glPopMatrix();

        //clock pendulum stick
        glColor3f(0.2,0.1,0.1); //0.2,0.1,0.1
        glPushMatrix();
        glTranslatef(-0.7,2,8.1);
        glRotatef(theta, 1,0,0);
        glScalef(0.0001, 0.2, 0.03);
        drawCube();
        glPopMatrix();
        
        //clock pendulum ball
        glColor3f(0.2,0.1,0.1); //0.2,0.1,0.1
        glPushMatrix();
        glTranslatef(-0.72,1.42,z);
        //glRotatef(x, 1,0,0);
        glScalef(0.035, 0.035, 0.035);
        drawCube();
        glPopMatrix();
        
        //clock top pyramid
        glColor3f(0.5, 0.2, 0);
        glPushMatrix();
        glTranslatef(-0.9,2.5,7.87);
        //glRotatef(x, 1,0,0);
        glScalef(0.2, 0.1, 0.2);
        drawpyramid();
        glPopMatrix();
}


void display(void){

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluPerspective(60,1,1,100);

    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
    gluLookAt(eyeX,eyeY,eyeZ,  refX,refY,refZ,  0,1,0); //7,2,15, 0,0,0, 0,1,0

    glViewport(0, 0, 800, 600);
    
    base();
    criadoMudo();
    cama();
    guardaRoupas();
    lampada();
    flor();
    prateleiras();
    armario();
    janela();
    fan();
    penteadeira();
    relogio();

    glFlush();
    glutSwapBuffers();
}

void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {
    case 'w': // move eye point upwards along Y axis
        eyeY+=1.0;
        break;
    case 's': // move eye point downwards along Y axis
        eyeY-=1.0;
        break;
    case 'a': // move eye point left along X axis
        eyeX-=1.0;
        break;
    case 'd': // move eye point right along X axis
        eyeX+=1.0;
        break;
    case 'o':  //zoom out
        eyeZ+=1;
        break;
    case 'i': //zoom in
        eyeZ-=1;
        break;
    case 'q': //back to default eye point and ref point
            eyeX=7.0; eyeY=2.0; eyeZ=15.0;
            refX=0.0; refY=0.0; refZ=0.0;
        break;
    case 'j': // move ref point upwards along Y axis
        refY+=1.0;
        break;
    case 'n': // move ref point downwards along Y axis
        refY-=1.0;
        break;
    case 'b': // move ref point left along X axis
        refX-=1.0;
        break;
    case 'm': // move eye point right along X axis
        refX+=1.0;
        break;
    case 'k':  //move ref point away from screen/ along z axis
        refZ+=1;
        break;
    case 'l': //move ref point towards screen/ along z axis
        refZ-=1;
        break;
        case 'f': //turn on/off fan
            if(fanSwitch == false) {
                fanSwitch = true; break;
            }
            else{
                fanSwitch = false; break;
            }
    case 27:    // Escape key
        exit(1);
    }
    
    glutPostRedisplay();
}


void animate()
{
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

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    
    std::cout<<"PONTO DE VISTA:"<< std::endl;
    std::cout<<"w: subir"<<std::endl;
    std::cout<<"s: descer"<<std::endl;
    std::cout<<"a: esquerda"<<std::endl;
    std::cout<<"d: direita"<<std::endl;
    std::cout<<"i: aumentar zoom"<<std::endl;
    std::cout<<"o: diminuir zoom"<<std::endl;
    std::cout<<"      "<<std::endl;
    std::cout<<"CAMERA:"<< std::endl;
    std::cout<<"j: subir"<<std::endl;
    std::cout<<"n: descer"<<std::endl;
    std::cout<<"b: esquerda"<<std::endl;
    std::cout<<"m: direita"<<std::endl;
    std::cout<<"l: aumentar zoom"<<std::endl;
    std::cout<<"k: diminuir zoom"<<std::endl;
    std::cout<<"      "<<std::endl;
    std::cout<<"Q: voltar para posição inicial"<<std::endl;
    std::cout<<"      "<<std::endl;
    std::cout<<"f: ligar/desligar ventilador    "<<std::endl;
    std::cout<<"      "<<std::endl;
    std::cout<<"____________________"<<std::endl;
    std::cout<<"      "<<std::endl;
    std::cout<<"      "<<std::endl;
    
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowPosition(100,100);
    glutInitWindowSize(windowHeight, windowWidth);
    glutCreateWindow("Quarto");

    glShadeModel( GL_SMOOTH );
    glEnable( GL_DEPTH_TEST );
    //glEnable(GL_NORMALIZE);
    glutDisplayFunc(display);
    glutKeyboardFunc(myKeyboardFunc);
    //glutSpecialFunc(myKeyboardFunc);
    glutIdleFunc(animate);
    glutMainLoop();

    return 0;
}
