#include <stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }
    return 0;
}// zero se initilization karvu hoy to calloc use karvu