#include <istream>

using namespace std;

// Here A and B are called as "FORMAL" parameters
int add(int a, int b) // This is a `Prototype` , `Signature` or `Header` of a function
{                     //
    int c;            //
    c = a + b;        // BODY of a Function
    return (c);       //
} //

int main()
{
    int x = 10, y = 20, z;

    // Here X and Y are called as "ACTUAL" parameters
    z = add(x, y); // Function Call
    return 0;
}