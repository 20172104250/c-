// operetor.cpp : 定义控制台应用程序的入口点。
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
	CFeet minut(CFeet & ojb);
	CFeet operator -(CFeet & ojb);
	CFeet add(CFeet & ojb);
	CFeet operator +(CFeet & ojb);

};
void CFeet::setvalue(int f, int i)
{
	inches = f * 12 + i;
	feet = inches / 12;
	inches = inches - 12.0*(int)(inches / 12);
}
void CFeet:: display()
{
	cout << feet << "英尺" << inches << "英寸" << endl;
}
CFeet CFeet::minut(CFeet&ojb)
{
	CFeet temp;
	temp.setvalue(feet - ojb.feet, inches - ojb.inches);
	return temp;
}
CFeet CFeet::add(CFeet&ojb)
{
	CFeet temp;
	temp.setvalue(feet + ojb.feet, inches + ojb.inches);
	return temp;
}
CFeet CFeet::operator-(CFeet & ojb)
{
	CFeet temp;
	temp.setvalue(feet - ojb.feet, inches - ojb.inches);
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
	CFeet A, B, C, D, E, F, G;
	A.setvalue(26, 12);
	B.setvalue(17, 10);
	C.setvalue(2, 11);
	D.setvalue(10, 15);
	E.setvalue(15, 36);
	F = A + B - C;
	G = A - B + C;
	D = A - E + C;
	C = A + B - D;
	E.display();
	D.display();
	C.display();
    return 0;
}

