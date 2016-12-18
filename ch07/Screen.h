#ifndef SCREEN_H
#define SCREEN_H

// #include "Window_mgr.h"
#include <iostream>
#include <vector>
using std::string; using std::cin; using std::cout; using std::endl; using std::istream; using std::ostream;
using std::vector;

class Screen;

class Window_mgr { 

public:
	// location ID for each screen on the window
	using ScreenIndex = vector<Screen>::size_type; // reset the Screen at the given position to all blanks
	void clear(ScreenIndex);

private:
	// std::vector<Screen> screens{Screen(24, 80, ' ')};
	std::vector<Screen> screens;
};

class Screen {
	friend void Window_mgr::clear(ScreenIndex);
	
public:
	using pos = string::size_type;

	Screen() = default;
	Screen(pos ht, pos wd): height(ht), width(wd), contents(ht*wd, ' ') {}
	Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht*wd, c) {} 

	char get() const { return contents[cursor]; }
	inline char get(pos r, pos c) const;
	Screen &move(pos r, pos c);

	Screen &set(char);
	Screen &set(pos, pos, char);

	Screen &display(ostream &os) {
		do_display(os);
		return *this;
	}
	const Screen &display(ostream &os) const {
		do_display(os);
		return *this;
	}

private:
	void do_display(ostream &os) const {
		os << contents;
	}	

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
};

// Screen
inline Screen &Screen::move(pos r, pos c) {
	pos row = r * width;
	cursor = row + c;
	return *this;
}

char Screen::get(pos r, pos c) const {    
	pos row = r * width;
	return contents[row + c];
}

inline Screen &Screen::set(char ch) {
	contents[cursor] = ch;
	return *this;
}
inline Screen &Screen::set(pos r, pos c, char ch) {
	contents[r*width + c] = ch;
	return *this;
}	

// Window_mgr
void Window_mgr::clear(ScreenIndex i)
{
	Screen &s = screens[i];
	s.contents = string(s.height * s.width, ' ');
}

#endif

