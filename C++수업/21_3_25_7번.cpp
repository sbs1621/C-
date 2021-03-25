#include <iostream>
using namespace std;

class Circle{
	int radius;
public:
	void setRedius(int r);
	double getArea();
};

void Circle::setRedius(int r)
{
	radius = r;
}
double Circle::getArea()
{
	return radius * radius * 3.14;
}

int main()
{
	Circle *c = new Circle();
	int n = 0;
	for (int i = 0; i < 3; i++)
	{
		cout << "원 " << i + 1 << "의 반지름 >> " ;
		int j;
		cin >> j;
		(c+i)->setRedius(j);
	}
	for (int i = 0; i < 3; i++)
	{
		if ((c + i)->getArea() > 100.0)
			n++;
	}
	cout << "면적이 100 보다 큰 원은 " << n << "개 입니다." << endl;

	return 0;
}
