#include <istream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r = {3, 2};
    // Assigning the pointer to Rectangle structure (r)
    struct Rectangle *p = &r;

    // Accessing without pointer
    r.breadth = 8;

    // Accessing with Pointer
    (*p).breadth = 8; // Without using the built in operator {PRO MODE}
    p->breadth = 8;   // With using the built in operator

    return 0;
}