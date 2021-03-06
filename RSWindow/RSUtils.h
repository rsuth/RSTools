#ifndef RSUTILS_H
#define RSUTILS_H

using namespace std;

/****
*	moveCursor
*	sets cursor position (x,y) coordinates
*/
void moveCursor(int x, int y);

/****
*	changeColor
*	changes color, using windows.h RGB color values
*/
void changeColor(int colorValue);

/****
*	printBackground
*	default: white on black, no pattern
*	overloads: change color, pattern)
*/
void printBackground();
void printBackground(int colorValue);
void printBackground(int colorValue, char patternChar);

/****
*	hitEnter
*	default: white on black, bottom center
*	overloads: change position, color
*/
void hitEnter(); 
void hitEnter(int xpos, int ypos);
void hitEnter(int xpos, int ypos, int color);

#endif /*RSUTILS_H*/
