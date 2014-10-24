#include"RSUtils.h"
#include<Windows.h>
#include<iostream>

using namespace std;

/****
* moveCursor: move the cursor...
*/
void moveCursor(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void changeColor(int colorValue){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorValue);
}

void printBackground(){
	moveCursor(0,0);
	changeColor(7);
	for(int i = 0; i < 40; i++){
		for(int j = 0; j < 80; j++){
			cout << ' ';
		}
	}
	moveCursor(0,0);
}

void printBackground(int colorValue){
	moveCursor(0,0);
	changeColor(colorValue);
	for(int i = 0; i < 40; i++){
		for(int j = 0; j < 80; j++){
			cout << ' ';
		}
	}
	moveCursor(0,0);
}

void printBackground(int colorValue, char patternChar){
	moveCursor(0,0);
	changeColor(colorValue);
	for(int i = 0; i < 40; i++){
		for(int j = 0; j < 80; j++){
			cout << patternChar;
		}
	}
	moveCursor(0,0);
}

void hitEnter(){
	moveCursor(37, 23);
	changeColor(7);
	cout << "[ENTER]";
	cin.ignore(10000, '\n');
}

/***
* Prints prompt, waits for enter
*/ 
void hitEnter(int xpos, int ypos){
	moveCursor(xpos, ypos);
	changeColor(7);
	cout << "[ENTER]";
	cin.ignore(10000, '\n');
}

void hitEnter(int xpos, int ypos, int color){
	moveCursor(xpos, ypos);
	changeColor(color);
	cout << "[ENTER]";
	cin.ignore(10000, '\n');
}
