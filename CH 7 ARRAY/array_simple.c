#include <stdio.h>

int main()
{
    //     int array[] = {10, 20, 30, 40, 50};
    //     printf("%d\n", array[0]);
    //     printf("%d\n", array[1]);
    //     printf("%d\n", array[2]);
    //     printf("%d\n", array[3]);
    //     printf("%d\n", array[4]);
    int arr[5];
    printf("Enter your marks\n");
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    printf("First = %d, second = %d , third = %d , forth = %d and fifth = %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);

    return 0;
}

