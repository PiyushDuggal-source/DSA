#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // This is a NON - ARGUMENT Constructor
    Rectangle() { length = breadth = 1; }

    // This is called as Constructor OverLoading!
    Rectangle(int l, int b); // This is just a Signature of a function

    // These two functions are Facilitators
    int area();
    int parimeter();

    // This is Accessors/ Getter Function
    int getLength() { return length; }

    // This is Mutators/ Setter Function
    void setLength(int l) { length = l; }

    // This is a Distructor
    ~Rectangle();
};

// Implementation of functions outside the CLASS | :: is called Scope Resolution
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

int Rectangle::area()
{
    return length * breadth;
}

int Rectangle::parimeter()
{
    return 2 * (length + breadth);
}

Rectangle::~Rectangle()
{
    // if you have any `de-allocation` you can do in the Distructor Fuction
}

int main()
{
    Rectangle r(20, 40);
    cout << r.area() << endl;
    cout << r.parimeter() << endl;
    r.setLength(50);
    cout << r.getLength() << endl;

    // Once the program ends the Distructor will be automatically called.
    return 0;
}
