#ifndef WINDOW_MGR_H 
#define WINDOW_MGR_H

#include "Screen.h"
#include <vector>
#include <iostream>
using std::string; using std::cin; using std::cout; using std::endl; using std::istream; using std::ostream;
using std::vector;
	
class Window_mgr { 

public:
	// location ID for each screen on the window
	using ScreenIndex = vector<Screen>::size_type; // reset the Screen at the given position to all blanks
	void clear(ScreenIndex);
private:
	std::vector<Screen> screens{Screen(24, 80, ' ')};
};
void Window_mgr::clear(ScreenIndex i)
{
	// s is a reference to the Screen we want to clear
	Screen &s = screens[i];
	// reset the contents of that Screen to all blanks 
	s.contents = string(s.height * s.width, ' ');
}

#endif



