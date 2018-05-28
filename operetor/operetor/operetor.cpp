// operetor.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
using namespace std;

class CFeet
{
private:
	int feet;
	int inches;
public:
	void setvalue (int f, int i);
	void display();
	CFeet add(CFeet & ojb);
	CFeet operator +(CFeet & ojb);

};
void CFeet::setvalue(int f, int i)
{
	feet = f + i / 12;
	inches = i % 12;
}
void CFeet:: display()
{
	cout << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CFeet CFeet::add(CFeet&ojb)
{
	CFeet temp;
	temp.setvalue(feet + ojb.feet, inches + ojb.inches);
	return temp;
}
CFeet CFeet::operator+(CFeet & ojb)
{
	CFeet temp;
	temp.setvalue(feet + ojb.feet, inches + ojb.inches);
	return temp;
}


int main()
{
	CFeet A, B, C;
	A.setvalue(13, 11);
	B.setvalue(17, 10);
	C = A + B;
	C.display();
    return 0;
}

