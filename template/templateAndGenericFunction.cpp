#include <iostream>

using namespace std;

// This template effect is only from line 8 to line 18
template <class T>
class Arithmetic
{

private:
    T a;
    T b;

public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

// This template effect is only from line 24 to line 27
template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T>::add()
{
    T c;
    c = a + b;

    return c;
}

template <class T>
T Arithmetic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}

int main()
{
    Arithmetic<float> ar(3.3, 2.4);
    cout << ar.add() << endl;
    cout << ar.sub() << endl;
    return 0;
}