#include <stdlib.h>
#include <stdio.h>
#include <istream>

using namespace std;
int main()
{
    // Initialize a Pointer
    int *p;

    //  Access the memory from the heap
    /// C Style
    p = (int *)malloc(5 * sizeof(int));

    /// Deletion of the Memory
    free(p);
    /// C++ Style
    p = new int[5];
    printf("%d", sizeof(p));
    /// Deletion of the Memory
    delete p;
    return 0;
}