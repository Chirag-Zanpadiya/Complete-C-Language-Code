#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int first;
    int second;
    for (int i = 0; i < (5 / 2); i++)
    {
        // arr[i] =first;
        // arr[5-i-1]= second;
        first = arr[i];
        second = arr[5 - i - 1];
        arr[i] = second;
        arr[5 - i - 1] = first;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}