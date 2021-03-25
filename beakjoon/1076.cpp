#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;


int main()
{
	string color[10] = { "black", "brown", "red", "orange", "yellow", "green", 
	"blue", "violet", "grey", "white"};
	string c;
	long long a[3] = { 0 };
	for(int i = 0; i < 3;i++ )
	{
		cin >> c;
		for (int j = 0; j < 10; j++)
		{
			if (c == color[j])
				a[i] = j;
		}
	}
	long long e = ((a[0] * 10) + a[1])*pow(10,a[2]);
	cout << e;

	
}
