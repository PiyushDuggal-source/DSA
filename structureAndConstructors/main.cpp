#include <istream>

using namespace std;

// Definition of a Stucture
struct Rectangle
{
    int length;
    int breadth;
};

// Types of Structure

/// No name structure
struct
{
    int length;
    int breadth;
} r;

/// Intialized with a variable Structure
struct Rectangle
{
    int length;
    int breadth;
} r;

// Declaration of a Structure
struct Rectangle r;

// Initialization of a Structure
struct Rectangle r = {1, 2};

// Examples of Structure

/// Student
struct Student
{
    char name[25];
    int roll;
    char dept[35];
    char address[50];
};

/// Complex Number
struct ComplexNumber
{
    int real;
    int img;
};

int main()
{
    // Access the member of the Structure
    r.length = 8;
    r.breadth = 5;

    // Array of Structures
    struct Student students[40];
    return 0;
}