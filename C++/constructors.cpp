#include <stdio.h>
#include <iostream>

using namespace std;

class Arithematic
{
private:
    int a;
    int b;

public:
    Arithematic(int a, int b);
    int add();
    int sub();
};

Arithematic::Arithematic(int a, int b)
{
    this->a = a;
    this->b = b;
}

int Arithematic::add()
{
    int c;
    c = a + b;
    return c;
}

int Arithematic::sub()
{
    return (a - b);
}

int main()
{
    Arithematic ar(1, 2);
    cout << "Add: " << ar.add() << endl;
    cout << "Sub: " << ar.sub() << endl;
}