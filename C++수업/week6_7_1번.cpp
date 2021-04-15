#include <iostream>
#include <string>
using namespace std;

class Book{
	string name;
	int cost;
	int page;
public:
	Book(string name, int cost, int page){ this->name = name; this->cost = cost; this->page = page; }
	Book& operator += (int n);
	Book& operator -= (int n);
	void show();
};
void Book::show()
{
	cout << name << " " << cost << "원 " << page << " 페이지" << endl;
}
Book &Book::operator+=(int n)
{
	cost += n;
	return *this;
}
Book &Book::operator-=(int n)
{
	cost -= n;
	return *this;
}

int main()
{
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}
