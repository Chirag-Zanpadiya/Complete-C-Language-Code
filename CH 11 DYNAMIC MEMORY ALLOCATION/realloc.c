#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    printf("Enter 5 num\n");
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", ptr[i]);
    }
    free(ptr);
    printf("\nEnter 8 num\n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%d\t", ptr[i]);
    }

    return 0;
}