// fibonacci series
#include <stdio.h>
int fab(int n);
int main()
{
    int n;
    printf("Enter your number to printf fibonacci series\n");
    scanf("%d", &n);
    printf("The fibonacci of %d is %d\n",n,fab(n));
    return 0;
}
int fab(int n)
{
    if (n == 0 || n == 1)
    {
        if (n == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    int fabnm1 = fab(n - 1);
    int fabnm2 = fab(n - 2);
    int fab = fabnm1 + fabnm2;
    return fab;
}

