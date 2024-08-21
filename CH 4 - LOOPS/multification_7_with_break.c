
#include <stdio.h>

int main()
{
    int n;
    // printf("Enter your number\n");
    // scanf("%d", & n);
    do
    {
        printf("Enter your number\n");
        scanf("%d", &n);
        if (n % 7 == 0)
        {
            printf("This is an devisible by 7 \n");
            break;
        }
        else
        {
            printf("Not devisible by 7\n");
        }

    } while (1);
    printf("Thank You\n");
    return 0;
}