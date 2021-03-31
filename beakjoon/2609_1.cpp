#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int a1, b1;
	a1 = a; b1 = b;
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	int d = a;

	cout << d << endl << (a1 * b1) / d;
		
}
//클래스 없이 작성
