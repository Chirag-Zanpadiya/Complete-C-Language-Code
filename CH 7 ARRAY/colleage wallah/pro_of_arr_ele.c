#include <stdio.h>

int main()
{
    int n;
    int mul = 1;
    printf("Enter your size of the array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        mul = mul * arr[i];
    }
    printf("The multification of the all elements in the given array is  :  %d\n", mul);

    return 0;
}