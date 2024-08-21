#include <stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter your size of the array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // int max = arr[0];
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf(" Max is : %d", max);
    return 0;
}