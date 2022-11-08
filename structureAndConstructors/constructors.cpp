#include <istream>

using namespace std;

// CLASS
class Rectangle
{
private:
    int length;
    int breadth;

public:
    void initialize(int len, int b)
    {
        length = len;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    void changeLen(int len)
    {
        length = len;
    }
};

class Square
{
private:
    int a;

private:
    // CONSTRUCTOR
    Square(int a1)
    {
        a = a1;
    }
};

int main()
{

    Rectangle r;
    r.initialize(20, 40);
    int ar = r.area();
    printf("%d", ar);

    r.changeLen(30);
    return 0;
}
