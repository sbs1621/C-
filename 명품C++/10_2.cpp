#include<iostream>
using namespace std;
template<class T>
T equalArray(T x[], T y[], T n) {
	for (int i = 0; i < n; i++) {
		if (x[i] != y[i])
			return false;
		else
			return true;
	}
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	int y[] = { 1, 10, 100, 5, 4 };
	if (equalArray(x, y, 5))
		cout << "같다"; 
	else
		cout << "다르다";
}
