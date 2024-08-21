#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("odd26.txt", "w");
    int n;
    printf("Enter your value for print odd numbers in file\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if ( i % 2 != 0)
        {
            fprintf(fptr, "%d\n", i);
        }
    }

    fclose(fptr);
    return 0;
}