#include<iostream>
#include <string>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class MyString {
private:
	int m_nLen;
	char* m_pStr;
public:
	MyString();
	MyString(const char* str);
	~MyString();
	friend ostream& operator << (ostream& os, MyString& temp);
	MyString operator=(MyString orgin);
	friend MyString operator+(MyString a, MyString b);
	friend MyString operator-(MyString a, MyString b);
};
MyString::MyString() {
	m_nLen = 1;
	m_pStr = new char[m_nLen];
	strcpy(m_pStr, "");
}
MyString::MyString(const char* str)
{
	m_nLen = strlen(str);
	m_pStr = new char[m_nLen + 1];
	strcpy(m_pStr, str);
}
MyString::~MyString()
{
	m_nLen = 0;
	m_pStr = NULL;
	delete[] m_pStr;
}
ostream& operator<<(ostream& os, MyString& temp)
{
	for (int i = 0; i < temp.m_nLen; i++)
		cout << temp.m_pStr[i];
	cout << endl;
	return os;
}
MyString MyString::operator=(MyString orgin)
{
	this->m_nLen = orgin.m_nLen;
	this->m_pStr = new char[this->m_nLen];
	for (int i = 0; i < this->m_nLen; i++)
		this->m_pStr[i] = orgin.m_pStr[i];
	return *this;
}
MyString operator+(MyString a, MyString b)
{
	MyString temp;
	temp.m_nLen = a.m_nLen + b.m_nLen;
	temp.m_pStr = new char[temp.m_nLen];
	for (int i = 0; i < temp.m_nLen; i++)
	{
		if (i < a.m_nLen)
			temp.m_pStr[i] = a.m_pStr[i];
		else
			temp.m_pStr[i] = b.m_pStr[i - a.m_nLen];
	}
	return temp;
}
MyString operator- (MyString a, MyString b)
{
	int count_a = 0, count_b = 0;
	int count = 0;
	for (int i = 0; i < a.m_nLen; i++)
	{
		for (int j = 0; j < b.m_nLen; j++)
		{
			if (a.m_pStr[i] == b.m_pStr[j])
			{
				b.m_pStr[j] = NULL;
				count++;
			}
		}
		if (count != 0)
		{
			char temp = a.m_pStr[i];
			a.m_pStr[i] = NULL;
			for (int k = 0; k < a.m_nLen; k++)
			{
				if (temp == a.m_pStr[k])
					a.m_pStr[k] = NULL;
			}
			count = 0;
		}
	}
	for (int i = 0; i < a.m_nLen; i++)
	{
		if (a.m_pStr[i] == NULL)
			count_a++;
	}
	for (int i = 0; i < b.m_nLen; i++)
	{
		if (b.m_pStr[i] == NULL)
			count_b++;
	}
	MyString temp_a;
	temp_a.m_nLen = a.m_nLen - count_a;
	temp_a.m_pStr = new char[temp_a.m_nLen];
	int index_a = 0;
	for (int i = 0; i < a.m_nLen; i++)
	{
		if (a.m_pStr[i] != NULL)
		{
			temp_a.m_pStr[index_a] = a.m_pStr[i];
			index_a++;
		}
	}

	MyString temp_b;
	temp_b.m_nLen = b.m_nLen - count_b;
	temp_b.m_pStr = new char[temp_b.m_nLen];
	int index_b = 0;
	for (int i = 0; i < b.m_nLen; i++)
	{
		if (b.m_pStr[i] != NULL)
		{
			temp_b.m_pStr[index_b] = b.m_pStr[i];
			index_b++;
		}
	}

	MyString temp;
	temp.m_nLen = temp_a.m_nLen + temp_b.m_nLen;
	temp.m_pStr = new char[temp.m_nLen];
	for (int i = 0; i < temp_a.m_nLen; i++)
		temp.m_pStr[i] = temp_a.m_pStr[i];
	for (int i = temp_a.m_nLen, j = 0; i < temp_a.m_nLen + temp_b.m_nLen, j < temp_b.m_nLen; i++, j++)
		temp.m_pStr[i] = temp_b.m_pStr[j];
	return temp;
}

int main() {
	MyString strA("Banana");
	MyString strB("Orange");
	MyString strC;
	MyString strD;
	MyString strE;

	cout << "strA=> " << strA << endl;
	cout << "strB=> " << strB << endl;

	strE = strA;
	strC = strA + strB;
	cout << "strC = " << strC << endl;

	strD = strA - strB;
	cout << "strD = " << strD << endl;

	cout << "strE = " << strE << endl;
}
