#include <stdio.h>

int main()
{
    int n;
    int isprime = 1;
    printf("Enter your number to know this number is prime or not\n");
    scanf("%d", &n);
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            isprime = 0;
        }
    }
    // printf("%d",isprime);
    if(isprime == 1){
        printf("This is prime numbers :");
    }
    else{
        printf("This isnot prime numbers :");
    }

    return 0;
}