#include <iostream>
#include "Maxofthree.h"
using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    Maxofthree1 m1(a);
    cin >> b >> c;
    Maxofthree2 m2;
    m2.input(b, c);
    mot(m1, m2);
}