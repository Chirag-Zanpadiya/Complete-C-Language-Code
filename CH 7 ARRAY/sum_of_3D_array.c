// // #include <stdio.h>

// // int main()
// // {
// //     int a[3][3];
// //     int b[3][3];
// //     int c[3][3];
// //     printf("Enter your first matrix\n");

// //     for (int i = 0; i < 3; i++)
// //     {
// //         for (int j = 0; j < 3; j++)
// //         {
// //             printf("Enter your %d-%d elements : - ", i, j);
// //             scanf("%d", &a[i][j]);
// //         }
// //     }
// //     printf("Enter your second matrix\n");
// //     for (int i = 0; i < 3; i++)
// //     {
// //         for (int j = 0; j < 3; j++)
// //         {
// //             printf("Enter your %d-%d elements : - ", i, j);
// //             scanf("%d", &b[i][j]);
// //         }
// //     }
// //     printf("....The sum of two matrix are below....\n");
// //     for (int i = 0; i < 3; i++)
// //     {
// //         for (int j = 0; j < 3; j++)
// //         {
// //             c[i][j] = a[i][j] + b[i][j];
// //             printf("%d\t", c[i][j]);
// //         }
// //         printf("\n");
// //     }

// //     return 0;
// // }

// #include <stdio.h>

// int main()
// {
//     int a[3][3];
//     int b[3][3];
//     int c[3][3];
//     printf("...Enter your first matrix...\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("Enter your %d-%d elements : ", i, j);
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("...Enter your second matrix...\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("Enter your %d-%d elements : ", i, j);
//             scanf("%d", &b[i][j]);
//         }
//     }
//     printf("...The sum of two matrix...\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             // printf("Enter your %d-%d elements : ", i, j);
//             c[i][j] = a[i][j] + b[i][j];
//             printf("%d ", c[i][j]);
//             // scanf("%d", & b[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    printf("First arr : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d-%d :", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Second arr : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d-%d :", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("sum is :");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}