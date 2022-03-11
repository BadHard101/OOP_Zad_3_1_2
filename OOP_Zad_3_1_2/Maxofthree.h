#ifndef MAXOFTHREE_H
#define MAXOFTHREE_H

class Maxofthree2;
class Maxofthree1
{
public:
	Maxofthree1(int);
	friend void mot(Maxofthree1& m1, Maxofthree2& m2);
private:
	int a;
};
class Maxofthree2
{
public:
	void input(int b,int c);
	friend void mot(Maxofthree1& m1, Maxofthree2& m2);
private:
	int b, c;
};

#endif // !MAXOFTHREE_H
