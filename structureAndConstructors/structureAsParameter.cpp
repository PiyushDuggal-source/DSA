#include <istream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

// This is PASS BY VALUE - The object is coppied in the function
int add(struct Rectangle r)
{
    return r.length * r.breadth;
}

// This is CALL BY REFERENCE - new Object will not be created
int add1(struct Rectangle &r)
{
    return r.length * r.breadth;
}

// This is CALL BY ADDRESS
// Here we are recieving an address, so we used a Pointer
void changeLength(struct Rectangle *r, int l)
{
    r->length = l;
}

struct ArrayInStruct
{
    int arr[5];
    int a;
};
// We can pass the Array inside the Structure!
// This is PASS BY VALUE
void fun(struct ArrayInStruct ais)
{
    ais.arr[0] = 29;
}

int main()
{

    struct Rectangle r = {2, 5};

    printf("%d", add(r));
    // We are passing the address of the ractangle object
    changeLength(&r, 20);
}
