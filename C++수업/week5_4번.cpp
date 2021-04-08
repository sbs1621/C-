#include <iostream>
#include <string>
using namespace std;

class MyVector{
	int * mem;
	int size;
public:
	MyVector(int n, int val);
	~MyVector(){ delete[]mem; }
};


MyVector::MyVector(int n = 100, int val = 0)
{
	mem = new int[n];
	size = n;
	for (int i = 0; i < n; i++){
		mem[i] = val;
		cout << mem[i];
	}
		
}


int main()
{
	MyVector();
	cout << endl;
	MyVector t(5,4);


}
