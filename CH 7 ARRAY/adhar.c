#include <stdio.h>

int main()
{
    int aadhar[10];
    int *c = &aadhar[0];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter your %d number\n", i);
        scanf("%d", (c + i));
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", *(c + i));
    }
    return 0;
}
// // work done by the array
// // ......
// #include <stdio.h>
// // ......
// int main()
// {
//     int aadhar[5];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter your %d number\n", i);
//         scanf("%d", &aadhar[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf(" your number :  %d\n", aadhar[i]);
//     }
//     return 0;
// }