#include"RSWindow.h"
#include"RSUtils.h"
#include<iostream>
#include<string>
#include<vector>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main(){
	int bgcolor;
	int windowcolor;

	vector<string> cat;
	cat.push_back("  \\   /\\ ");
	cat.push_back("   ) ( ') ");
	cat.push_back("  ( /  )  ");
	cat.push_back("   \(__)|  ");
		
	RSWindow testWindow(24,4,12,10, 32, "Cat");
	testWindow.setContent(cat);
	srand(time(NULL));
	
	while(true){
		bgcolor = rand()%250;
		windowcolor = rand()%250;
		printBackground(bgcolor, ' ');
		testWindow.color = windowcolor;
		testWindow.shadowColor = rand()%250;
		testWindow.xpos = rand()%60;
		testWindow.ypos = rand()%16;
		testWindow.title = (to_string(bgcolor)+ " | " + to_string(windowcolor));
		testWindow.draw();
		hitEnter();
	}

	return 0;
}



