#include <iostream>
#include <string>
using namespace std;


class Color{
	int red, green, blue;
public:
	Color(int r =255, int g = 0, int b = 255){ red = r; green = g; blue = b; }
	void show(){ cout << red << ' ' << green << ' ' << blue << endl; }
	bool operator==(Color op){
		if (this->red == op.red && this->blue == op.blue && this->green == op.green)
			return true;
		else
			return false;
	}
	Color operator+ (Color &b){
		Color c;
		c.red = this->red + b.red;
		c.blue = this->blue + b.blue;
		c.green = this->green + b.green;
		return c;
	}
};


int main()
{
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();
	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
	
}
