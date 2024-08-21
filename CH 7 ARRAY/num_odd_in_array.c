

#include <stdio.h>
int odd(int arr[], int n);
int main()
{
    int n;
    printf("Enter your size of the arr : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter your %d elements : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("%d elements are odd in the arrray : ", odd(arr, n));
    return 0;
}
int odd(int arr[], int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            c++;
        }
    }
    return c;
}