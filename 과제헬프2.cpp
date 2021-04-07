#include <iostream>
#include <string>
using namespace std;

class Cylinder {
    int radius;
    int height;
public:
    void cy(double r, double h);
    double getArea();
    void showCircle();
};

void Cylinder::cy(double r, double h)
{
    radius = r;
    height = h;
}

double Cylinder::getArea()
{
    double area = radius * radius * 3.14 * height;
    return area;
}

void Cylinder::showCircle()
{
    cout << "번째 원기둥의 반지름 : " << radius << ", 높이 : " << height << ", 면적 : " << getArea() << endl;
}

int main()
{
    string num[3] = { "첫", "두", "세" };
    Cylinder a;
    a.cy(10, 5);
    cout << num[0];
    a.showCircle();
    Cylinder b;
    b.cy(5, 10);
    cout << num[1];
    b.showCircle();
    Cylinder c;
    c.cy(10, 10);
    cout << num[2];
    c.showCircle();
}
