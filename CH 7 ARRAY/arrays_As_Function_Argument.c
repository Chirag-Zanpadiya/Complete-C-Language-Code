#include <stdio.h>
void printfnumber(int arr[], int n);
int main()
{
    int arr[] = {1, 2, 23, 6, 614, 144, 41, 51};
    printfnumber(arr, 8);
    return 0;
}
void printfnumber(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}