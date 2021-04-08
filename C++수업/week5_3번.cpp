#include <iostream>
#include <string>
using namespace std;


int big(int a, int b, int c = 100)
{
	if (a < b)
		a = b;
	if (a < c)
		return a;
	else
		return c;
	
	
}



int main()
{
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60,50);
	cout << x << ' ' << y << ' ' << z << endl;

}
