#include <iostream>
using namespace std;

int main()
{
	int c = 1;
	while (true)
	{
		if (c % 10 == 0)
			cout << c << endl;
		else
		{
			if(c > 9)
			cout << c << " ";
			else
				cout << c << "  ";
		}
		c++;
		if(c == 101)
			break;
	}

}
