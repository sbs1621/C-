#include<iostream>
#include<string>
using namespace std;

class student {
	int num;
	string name;
	int kor;
public:
	void students(int n, string na, int k);
	void showStudent();
};

void student::students(int n, string na, int k)
{
	num = n;
	name = na;
	kor = k;
}

void student::showStudent() {
	cout << "학번 : " << num << endl << "이름 : " << name << endl << "국어 : " << kor << endl;
}
int main()
{
  student t;
	t.students(1, "홍길동", 10);
	t.showStudent();
	student s;
	s.students(2, "홍길동2", 20);
	s.showStudent();
	student u;
	u.students(3, "홍길동3", 30);
	u.showStudent(); 
}
