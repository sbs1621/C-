#include <iostream>
#include <string>
using namespace std;

class Book{
	string name;
	int cost;
	int page;
public:
	Book(){ this->name = name; this->cost = cost; this->page = page; }
	Book(string name, int cost, int page){ this->name = name; this->cost = cost; this->page = page; }
	friend Book operator += (Book& op ,int n);
	friend Book operator -= (Book& op, int n);
	void show();
};
void Book::show()
{
	cout << name << " " << cost << "원 " << page << " 페이지" << endl;
}
Book operator+=(Book& op ,int n)
{
	Book tmp = op;
	op.cost += n;
	return tmp;
}
Book operator-=(Book& op ,int n)
{
	Book tmp = op;
	op.cost -= n;
	return tmp;
}

int main()
{
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}
