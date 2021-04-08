#include <iostream>
#include <string>
using namespace std;
class person{
	int id =1;
	double weigth = 20.5;
	string name = "Grace";
public:
	person(){}
	person(int i, string n);
	person(int i, string n, double w);
	void show(){ cout << id << ' ' << weigth << ' ' << name << endl; }
};

person::person(int i, string n)
{
	id = i;
	name = n;
}
person::person(int i, string n, double w)
{
	id = i;
	name = n;
	weigth = w;
}

int main()
{
	person grace, ashley(2, "Ashley"), helen(3, "Helen", 3.25);
	grace.show();
	ashley.show();
	helen.show();

}
