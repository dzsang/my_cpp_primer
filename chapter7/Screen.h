#ifndef Screen_h
#define Screen_h


#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std; 


class Window_mgr {
public:
	using ScreenIndex = vector<Screen>::size_type;
	void clear(ScreenIndex);
	ScreenIndex addscreen(const Screen&);

private: 
	vector<Screen> screens{Screen(24, 80, ' ')};

}



class Screen {

friend class Window_mgr::clear(ScreenIndex);

public:
	
	typedef string::size_type pos;
	Screen() = default;		//1
	Screen(pos ht, pos wd): height(ht), width(wd), contents(ht * wd, ' '){ }	//2
	Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c){ }	//3
	
	
	char get() const
		{ return contents[cursor]; }
	inline char get(pos ht, pos wd) const;
	Screen &move(pos r, pos c);
	void some_mumber() const ;
	
	Screen &display(ostream &os)
		{ do_display(os); return *this; }
	const Screen &display(ostream &os) const
		{ do_display(os); return *this; }

	Screen &set(char c);
	Screen &set(pos r, pos c, char ch);	

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;	
	mutable size_t access_ctr;
	
	void do_display(ostream &os) const { os << contents; }
};



inline void Window_mgr::clear(ScreenIndex i)
{
	Screen &s = screens[i];
	s.contents = string(s.height * s.width, ' ');
}

Window_mgr::ScreenIndex Window_mgr::addscreen(const Screen &s)
{
	screens.push_back(s);
	return screens.size() - 1;
}

inline Screen &Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}

char Screen::get(pos r, pos c) const
{
	pos row = r * width;
	return contents[row + c];
}

void Screen::some_mumber() const
{
	++access_ctr;
}

inline Screen &Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch)
{
	contents[r*width + col] = ch;
	return *this;
}




























#endif
