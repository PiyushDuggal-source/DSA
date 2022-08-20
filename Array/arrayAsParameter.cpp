#include <istream>

using namespace std;

// ARRAYS are only passed by Address
//! They cannot be passed as Value

/// THIS FUNCTION CAN MODIFY THE ACTUAL CONTENT OF THE ARRAY BECAUSE IT IS CALL BY ADDRESS
void fun(int a[], int n) // instead of writing `a[]`, we can write as `*a`
{
    int i;
    for (i; i < n; i++)
    {
        printf("%d", a[i]);
    }
}

int main()
{
    int A[5] = {1, 3, 4, 5, 5};
    int n = 5;
    fun(A, n);
    return 0;
}