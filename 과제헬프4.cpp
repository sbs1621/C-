#include<iostream>
using namespace std;
class Rectangle {

private:
    int getArea();
public:
	Rectangle();
	Rectangle(int x, int y);
	Rectangle(int x, int y, int length, int height);
    int x, y;
    int height, length;
    void showRect();

};

Rectangle::Rectangle() {
	this->height = 5;
	this->length = 5;
	this->x = 5;
	this->y = 5;
}
Rectangle::Rectangle(int x, int y)
{
	this->x = x;
	this->y = y;
	this->height = 5;
	this->length = 5;
}
Rectangle::Rectangle(int x, int y, int length, int height) 
{
	this->x = x;
	this->y = y;
	this->length = length;
	this->height = height;
}

int Rectangle::getArea() {
    int area = length * height;
    return area;

}

void Rectangle::showRect() {
    cout << "(" <<x<<","<< y<<")"<< "가로:" << length << ' ' << "세로:" << height << ' ' << "넓이:" << getArea() << endl;
}

int main()
{
	Rectangle a;
	Rectangle b(5, 10);
	Rectangle c(1, 1, 5, 10);
	a.showRect();
	b.showRect();
	c.showRect();

	Rectangle *p;
	Rectangle* q;
	Rectangle* r;
	p = &a;
	q = &b;
	r = &c;
	p->showRect();
	q->showRect();
	r->showRect();

	
}
