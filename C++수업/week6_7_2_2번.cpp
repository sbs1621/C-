#include <iostream>
#include <string>
using namespace std;
/*
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
void problem1()
{
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}
*///1번

class Book{
	string name;
	int cost;
	int page;
public:
	Book(string name, int cost, int page){ this->name = name; this->cost = cost; this->page = page; }
	friend bool operator == (Book & op, int c);
	friend bool operator == (Book & op, string n);
	friend bool operator == (Book & op, Book op3);
	void show();
};
void Book::show()
{
	cout << name << " " << cost << "원 " << page << " 페이지" << endl;
}
bool operator==(Book & op, int c)
{
	
	if (op.cost == c)
		return true;
	else
		return false;
}
bool operator==(Book & op, string n)
{
	if (op.name == n)
		return true;
	else
		return false;
}
bool operator==(Book & op, Book op3)
{
	if (op.cost == op3.cost && op.name == op3.name && op.page == op3.page)
		return true;
	else
		return false;
}



int main()
{
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000)
		cout << "정가 30000원" << endl;
	if (a == "명품 C++")
		cout << "명품C++입니다" << endl;
	if (a == b)
		cout << "두 책이 같은 책입니다." << endl;
	
}
