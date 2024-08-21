#include <stdio.h>

int main()
{
    int n;
    printf("Enter your marks\n");
    scanf("%d", &n);
    if (n > 90 && n <= 100)
    {
        printf("Grade : A\n");
    }
    else if (n > 80 && n <= 90)
    {
        printf("Grade : B");
    }
    else if (n > 70 && n <= 80)
    {
        printf("Grade : C");
    }
    else
    {
        printf("You are not clever students\n");
    }
    return 0;
}