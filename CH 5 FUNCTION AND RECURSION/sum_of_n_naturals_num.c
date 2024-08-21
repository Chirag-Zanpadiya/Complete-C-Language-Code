#include <stdio.h>
int sum(int n);
int main()
{
    printf("The sum of %d is %d\n", 5, sum(10));
    return 0;
}
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sumnm1 = sum(n - 1);
    int sumn = sum(n - 1) + n;
    return sumn;

}
