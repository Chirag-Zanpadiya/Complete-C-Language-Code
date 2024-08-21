// imp most..
#include <stdio.h>

void reverse(int arr[], int n);
void print(int arr[], int n);
int main()
{
    int n;
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    reverse(arr, 10);
    print(arr, 10);

    return 0;
}
void reverse(int arr[], int n)
{
    for (int i = 0; i < (n / 2); i++)
    {
        int first = arr[i];
        int second = arr[n - i - 1];
        arr[i] = second;
        arr[n - i - 1] = first;
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t ", arr[i]);
    }
}