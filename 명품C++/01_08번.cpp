#include <iostream>
#include <string>
using namespace std;

int main()
{
	char name[100];
	
	cout << "5명의 이름을 ';'로 구분해서 입력하세요" << endl;
	
	string n[5];
	string t;
	
	
	for (int i = 0; i < 5; i++)
	{
		cin.getline(name, 100, ';');
		n[i] = name;
	}
	int c = n[0].length();
	for (int i = 0; i < 5; i++)
	{
		if (c < n[i].length())
		{
			c = n[i].length();
			t = n[i];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		cout <<i+1 << " : " << n[i] << endl;
	}
	cout << "가장 긴 이름은 " << t;
}
