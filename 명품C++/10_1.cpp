#include <iostream>
using namespace std;

template<class T>
T biggest(T a[], T n) {
	T big = a[0];
	for (int i = 0; i < n; i++)
		big = big < a[i] ? a[i] : big;
	return big;
}


int main() {
	int big = 0;
	int x[] = { 1,10,100,5,4 };
	cout << biggest(x, 5);
}
