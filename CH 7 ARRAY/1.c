// #include<stdio.h>
// void reverse(int arr[], int n);
// void print(int arr[], int n);
// int main (){
//     int arr[] = {10,20,30,40,50,60};
//     reverse(arr, 6);
//     print(arr,6);

//     return 0;
// }
// void reverse(int arr[], int n){
// for(int i = 0 ; i <(n/2);i++){
//     int first = arr[i];
//     int second = arr[n-i-1];
//     arr[i] = second;
//     arr[n-i-1] =first;

// }

// }
// void print(int arr[], int n){
// for(int i = 0 ; i < n ;i++){
//     printf("%d\t",arr[i]);
// }

// }

// #include <stdio.h>
// void reverse(int arr[], int n);
// void print(int arr[], int n);

// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50, 60, 70};
//     reverse(arr, 7);
//     printf("...........Your revese arr is below........");
//     printf("\n");
//     print(arr, 7);

//     return 0;
// }
// void reverse(int arr[], int n)
// {
//     for (int i = 0; i < (n / 2); i++)
//     {
//         int f = arr[i];
//         int s = arr[n - i - 1];
//         arr[i] = s;
//         arr[n - i - 1] = f;
//     }
// }
// void print(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\t", arr[i]);
//     }
// }

#include <stdio.h>
int rev(int arr[], int n);
void print(int arr[], int n);
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    rev(arr, 7);
    printf("\n");
    print(arr, 7);
    return 0;
}
int rev(int arr[], int n)
{
    for (int i = 0; i < n/2; i++)
    {
        int f = arr[i];
        int s = arr[n - i - 1];
        arr[i] = s;
        arr[n - i - 1] = f;
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}