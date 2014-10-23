#ifndef RSWINDOW_H
#define RSWINDOW_H

#include"RSUtils.h"
#include<string>
#include<vector>

using namespace std;

class RSWindow
{

public:
	int xpos;
	int ypos;
	int width;
	int height;
	int color;
	bool shadow;
	int shadowColor;
	string title;
	RSWindow();
	RSWindow(int _xpos, int _ypos);
	RSWindow(int _xpos, int _ypos, string _title);
	RSWindow(int _xpos, int _ypos, int _width, int _height, string _title);
	RSWindow(int xpos, int ypos, int width, int height, int color);
	RSWindow(int _xpos, int _ypos, int _width, int _height, int _color, string _title);
	~RSWindow();
	void drawContent();
	void drawContent(vector<string> &_contents);
	void draw();
	void setContent(vector<string> _content);
	

private:
	vector<string> content;

};


#endif /*RSWINDOW_H*/