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

};
void CFeet::setvalue(int f, int i)
{
	feet = f + i / 12;
	inches = i % 12;
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
CFeet CFeet::operator-(CFeet & ojb)
{
	CFeet temp;
	temp.setvalue(feet - ojb.feet, inches - ojb.inches);
	return temp;
}


int main()
{
	CFeet A, B, C, D, E;
	A.setvalue(26, 11);
	B.setvalue(17, 10);
	C.setvalue(2, 11);
	D.setvalue(10, 15);
	E = A - B;
	D = A - C;
	C = A - B;
	E.display();
	D.display();
	C.display();
    return 0;
}

