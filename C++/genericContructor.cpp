#include <stdio.h>
#include <iostream>

using namespace std;

template <class T>
class Arithematic
{
private:
    T a;
    T b;

public:
    Arithematic(T a, T b);
    T add();
    T sub();
};
template <class T>
Arithematic<T>::Arithematic(T a, T b)
{
    this->a = a;
    this->b = b;
}
template <class T>
T Arithematic<T>::add()
{
    T c;
    c = a + b;
    return c;
}
template <class T>
T Arithematic<T>::sub()
{
    return (a - b);
}

int main()
{
    Arithematic<float> ar(1.2, 2.0);
    cout << "Add: " << ar.add() << endl;
    cout << "Sub: " << ar.sub() << endl;
}