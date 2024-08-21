#include <stdio.h>
int max(int arr[], int n);
int main()
{
    int arr[] = {1, 2, 34, 153116, 4016, 1, 6, 56, 145464};
    int Max = max(arr, 7);
    printf("Max = %d", Max);
    return 0;
}
int max(int arr[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}
