#include <stdio.h>
#include<conio.h>
int table(int a);
int main()
{
    clrscr();
    int a;
    printf("Enter your number to find the table\n");
    scanf("%d", &a);

    table(a); // argument // actual parameter
    // table(a);
    return 0;
}
int table(int x) // parameter // formal parameter
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", x, i, x * i);
    }
}

// #include <stdio.h>
// int table(int a);
// int main()
// {
//     int a;
//     printf("Enter your num\n");
//     scanf("%d", &a);
//     table(a);
//     return 0;
// }
// int table(int a)
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d X %d = %d\n", a, i, a * i);
//     }
// }