#include <iostream>
using namespace std;

void problem1()
{
	long long a,b;
	int c,d;
	cin >> a >> b;
	c = 0;
	d = (a / 100) * 100;
	if (a >= 100)
	{
		while ((c + d)%b != 0)
		{
			c++;
		}
		if (c < 10)
			cout << "0" << c;
		else
			cout << c;
	}
}


int main()
{
	problem1();
}
