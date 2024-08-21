//  // In 2D array second dimenstion must be required..
//  #include <stdio.h>
// int storetable(int arr[][10], int n, int m, int num);
// int main()
// {
//     int table[2][10];
//     storetable(table, 0, 10, 10);
//     storetable(table, 1, 10, 20);
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d\t", table[0][i]);
//     }
//     printf("\n");
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d\t", table[1][i]);
//     }
//     return 0;
// }
// int storetable(int arr[][10], int n, int m, int num)
// {
//     for (int i = 0; i < m; i++)
//     {
//         arr[n][i] = num * (i + 1);
//     }
// }
#include <stdio.h>
void table(int arr[][10], int n, int m, int n1);
void table1(int arr[][10], int n, int m, int n2);
int main()
{
    int n1, n2;
    int arr[2][10];
    printf("Enter your first num\n");
    scanf("%d", &n1);
    printf("Enter your first num\n");
    scanf("%d", &n2);
    table(arr, 0, 10, n1);
    for (int i = 0; i < 10; i++)
    {

        printf("%d ", arr[0][i]);
    }
    printf("\n");
    table1(arr , 1 , 10 , n2);
    for (int i = 0; i < 10; i++)
    {

        printf("%d ", arr[1][i]);
    }
    return 0;
}
void table(int arr[][10], int n, int m, int n1)
{
    for (int i = 0; i < m; i++)
    {
        arr[n][i] = n1 * (i + 1);
    }
}
void table1(int arr[][10], int n, int m, int n2)
{
    for (int i = 0; i < m; i++)
    {
        arr[n][i] = n2 * (i + 1);
    }
}