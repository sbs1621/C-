#include <iostream>
#include <string>
using namespace std;


class Cylinder {
    int radius;
    int height;
    double getArea();
public:
    void cy(double r, double h);
    void showCircle();
    void setRadius(int x);
    void setHeight(int x);
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

void Cylinder::setRadius(int x)
{

    cout << "반지름이 " << radius << "에서";
    radius = x;
    cout << radius << " 으로 변경 되었습니다" << endl;
}
void Cylinder::setHeight(int x)
{
    cout << "반지름이 " << height << "에서";
    height = x;
    cout << height << " 으로 변경 되었습니다" << endl;
}



void Cylinder::showCircle()
{
    cout << "첫번째 원기둥의 반지름 : " << radius << ", 높이 : " << height << ", 면적 : " << getArea() << endl;
}

int main()
{
    Cylinder a;
    a.cy(10, 5);
    a.setRadius(5);
    a.setHeight(10);
    a.showCircle();
}
