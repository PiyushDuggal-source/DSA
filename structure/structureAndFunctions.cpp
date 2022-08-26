#include <istream>

using namespace std;

// Structure
struct Ractangle
{
    int length;
    int breadth;
};

void initialize(struct Ractangle *r, int len, int breadth)
{
    r->breadth = breadth;
    r->length = len;
}

void changeLength(struct Ractangle *r, int newLen)
{
    r->length = newLen;
}

int area(struct Ractangle r)
{
    return r.length * r.breadth;
}

int main()
{
    struct Ractangle r;
    initialize(&r, 30, 40);
    int ar = area(r);
    printf("\n%d\n", ar);

    changeLength(&r, 20);

    return 0;
}