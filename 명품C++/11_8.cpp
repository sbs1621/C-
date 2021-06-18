#include <iostream>
using namespace std;

class Circle {
	string name;
	int radius;
public:
	Circle(int radius = 1, string name = "") {
		this->radius = radius;
		this->name = name;
	}
	friend ostream& operator <<(ostream& os, Circle c);
	friend istream& operator >>(istream& ins, Circle& c);
};

ostream& operator <<(ostream& os, Circle c) {
	os << "(반지름이 " << c.radius << "인 " << c.name << ")";
	return os;
}
istream& operator >>(istream& ins, Circle& c) {
	cout << "반지름 : ";
	ins >> c.radius;
	cout << "이름 >> ";
	ins >> c.name;
	return ins;
}

int main() {
	Circle d, w;
	cin >> d >> w;
	cout << d << w << endl;
}
