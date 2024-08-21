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