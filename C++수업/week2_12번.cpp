//헤더파일
#ifndef RAM_H
#define RAM_H

class Ram {

	char mem[100 * 1024];
	int size;
public:
	Ram();
	~Ram();
	char read(int address);
	void write(int address, char value);

};


#endif // !RAM_H

////////////////////////////////////////////////////////////////////////////
//클래스
#include "Ram.h"
#include <iostream>
using namespace std;

Ram::Ram()
{
	mem[100 * 1024] = { 0 };
	size = 100 * 1024;
}
char Ram::read(int address)
{
	return mem[address];
}
void Ram::write(int address, char value)
{
	mem[address] = value;
}
Ram::~Ram()
{
	cout << "¸Þ¸ð¸® Á¦°ÅµÊ";
}

///////////////////////////////////////////////////////////////////////////
//  
#include "Ram.h"
#include <iostream>
using namespace std;

int main()
{
	Ram ram;
	ram.write(100, 20);
	ram.write(101, 30);
	char res = ram.read(100) + ram.read(101);
	ram.write(102,res);
	cout << "102¹øÁöÀÇ °ª = " << (int)ram.read(102) << endl;
}
