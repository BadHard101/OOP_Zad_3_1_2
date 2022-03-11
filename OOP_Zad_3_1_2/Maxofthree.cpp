#include <iostream>
#include "Maxofthree.h"
using namespace std;

void Maxofthree2::input(int b, int c)
{
	this->b = b;
	this->c = c;
}

Maxofthree1::Maxofthree1(int a)
{
	this->a = a;
}

void mot(Maxofthree1& ob1, Maxofthree2& ob2)
{
	if (ob2.b > ob2.c && ob2.b > ob1.a)
		cout << "max = " << ob2.b;
	else if (ob2.c > ob2.b && ob2.c > ob1.a)
		cout << "max = " << ob2.c;
	else
		cout << "max = " << ob1.a;
}