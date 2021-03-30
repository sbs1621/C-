#include <iostream>
using namespace std;


int main()
{
	char a[20];
	cin >> a;
	for (int i = 0; i < 20; i++)
	{
		cout << "\'"<< a[i]<< "\'" << endl;
		if (a[i + 1] == NULL)
			break;
	}
}
