#include <istream>

using namespace std;

/// CALL BY VALUE

/*
This swap Function will NOT change the `Actual` parameters because the values of actual parameters is being copied in the `Formal` parameters
*/
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

/// CALL BY ADDRESS

/*
This swap Function will change the `Actual` parameters because the addresses of `Actual` parameters are passed in this function
so they are modifying/dereffencing the `Actual` parameters itself
*/
void swapActual(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

/// CALL BY REFERENCE //! ONLY IN C++

/*
Here A and B will become the reference to X and Y, like the same name
*/
void swapUsingReference(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;
    x = 10;
    y = 20;
    swap(x, y);
    printf("%d %d", x, y);

    swapActual(&x, &y);
    printf("%d %d", x, y);

    swapUsingReference(x, y);
    printf("%d %d", x, y);

    return 0;
}