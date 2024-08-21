#include <stdio.h>
void squre(int *n);
int main()
{
    int n = 5;
    
    printf("The value of the n is %d\n", n);
    squre(&n);
    printf("The value after call by reference of the n is %d\n", n);
    return 0;
}
void squre(int *n)
{
    *n = (*n) * (*n); // 5 * 5 = 25 //
    printf("The squre is %d\n", *n);
}

// output
// The squre is 25
// The value of the n is 25