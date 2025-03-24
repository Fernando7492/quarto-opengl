#ifndef BEDROOM_OBJECTS_H
#define BEDROOM_OBJECTS_H

#include <GL/glew.h>
#include <GL/glut.h>

extern GLboolean redFlag;
extern GLboolean fanSwitch;
extern double theta;
extern double y;
extern double z;
extern double a;

void wardrobe();
void bedsideTable();
void dressingTable();
void bed();
void lampshade();
void structure();
void flowerPot();
void rack();
void cabinet();
void window();
void myClock();
void display();
void bedroomStructure();
void fan();

//animations
void animateClock();
void animateFan();

#endif