#include <stdio.h>

int main()
{

    // argv is a pointer to a pointer to char
    char **argv;

    // daytab is a pointer which points to array of 13 integers
    int(*daytab)[13];

    // daytab is an array of 13 integers which are all pointers to integer
    int *daytab[13];

    //  comp is a function which is returning a pointer to void
    void *comp();

    // comp is a pointer to a function which retern to a char
    char (*comp)();

    // f is a function which returns a pointer to a array of pointers to fuction which returns to char
    char (*(*f())[])();

    // f is an array of 3 elements which are pointers to funtions returning pointers to array of 5 characters
    char(*(*f[3])())[5];
    return 0;
}