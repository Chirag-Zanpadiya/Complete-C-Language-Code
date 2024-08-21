#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int isprime = 1;
    int i = 1;
    printf("Enter your num : ");
    scanf("%d", &n);
    while (i  <= sqrt(n))
    {
        if (n % i == 0)
        {
            isprime = 0;
            break;
        }
        i++;
    }
    if(isprime == 1 ){
        printf("The num is prime\n");

    }
    else{
        printf("The num is not prime");
    }
    return 0;
}