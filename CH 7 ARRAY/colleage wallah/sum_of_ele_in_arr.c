#include <stdio.h>

int main()
{
    int sum = 0;
    int i;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (i = 0; i < 10; i++)
    {
        sum = arr[i] + sum;
    }
    printf("%d", sum);
    return 0;
}