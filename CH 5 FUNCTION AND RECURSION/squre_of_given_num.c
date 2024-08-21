#include <stdio.h>
#include <math.h>
void squre(float n);
int main()
{
    float n;
    printf("Ente your number\n");
    scanf("%f", &n);
    squre(n);

    return 0;
}
void squre(float n)
{
    printf("The squre of %f is = %0.2f\n", n, pow(n, 2));
}