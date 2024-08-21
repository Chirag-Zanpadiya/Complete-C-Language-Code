// Time Table
#include <stdio.h>
int main()
{
    int a;
    printf("Enter hours between 7 to 10 \n");
    printf("Enter your number:-");
    scanf("%d", &a);
    if (a >= 7 && a <= 8)
    {
        printf("Take breakfast\n");
    }
    else if (a > 8 && a <= 10)
    {
        printf("Study time\n");
    }
    else
    {
        printf("Full moj\n");
    }

    return 0;
}