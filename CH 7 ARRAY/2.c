// #include<stdio.h>
// void storetable(int arr[][10], int n , int m , int number);
// int main (){
//     int arr[2][10];
//     storetable(arr,0,10,5);
//     storetable(arr,1,10,10);
//     for(int i = 0 ; i < 10; i++){
//         printf("%d\t", arr[0][i]);

//     }
//     printf("\n");
//        for(int i = 0 ; i < 10; i++){
//         printf("%d\t", arr[1][i]);

//     }

//     return 0;
// }
// void storetable(int arr[][10], int n , int m , int number){
// for(int i = 0; i < m;i++){
// arr[n][i] = number * (i+1);
// }

// }

#include <stdio.h>
int table(int arr[2][10], int n, int m, int num);
int main()
{
    int arr[2][10];
    table(arr, 0, 10, 2);
    table(arr, 1, 10, 5);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[1][i]);
    }
    return 0;
}
int table(int arr[2][10], int n, int m, int num)
{
    for (int i = 0; i < m; i++)
    {
        arr[n][i] = num * (i + 1);
    }
}