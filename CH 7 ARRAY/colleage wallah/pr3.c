#include <stdio.h>

int main()
{
    int n;
    printf("Enter your size of the arr\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your marks\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 35)
        {
            printf("Your roll no is : %d\n", i);
        }
    }
    return 0;
}