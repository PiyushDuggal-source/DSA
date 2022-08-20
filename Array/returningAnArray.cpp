#include <istream>
#include <stdlib.h>

using namespace std;

int *fun(int n)
{
    int *p;

    p = (int *)malloc(n * sizeof(int));

    return p;
}

int main()
{
    int *a;
    a = fun(5);

    return 0;
}