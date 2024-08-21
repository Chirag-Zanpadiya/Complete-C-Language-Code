// #include <stdio.h>

// int main()
// {
//     int arr[2][2];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("Enter your %d-%d elements\n", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("|%d|", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// 2d arr by function
// #include <stdio.h>
// void display(int arr[][2]);
// int main()
// {
//     int arr[2][2];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("enter your %d - %d elements : ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     display(arr);
//     return 0;
// }
// void display(int arr[][2])
// {
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }
#include <stdio.h>

int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d-%d : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    // int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // printf(" %d-%d : ",i , j);
            printf("%d ", arr[i][j]);
            // scanf("%d/",&arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}