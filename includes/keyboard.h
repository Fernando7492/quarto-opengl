#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <GL/glew.h>   
#include <GL/glut.h> 

extern GLboolean fanSwitch;
extern double eyeX; 
extern double eyeY;
extern double eyeZ;
extern double refX;
extern double refY;
extern double refZ;

void keyboard( unsigned char key, int x, int y );
void instructions();


#endif