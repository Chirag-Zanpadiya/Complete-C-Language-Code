// #include <stdio.h>

// int main()
// {
//     FILE *fptr;
//     fptr = fopen("sum.txt", "w");
//     int a, b;
//     printf("Enter your first num\n");
//     scanf("%d", &a);
//     printf("Enter your second num\n");
//     scanf("%d", &b);
//     fprintf(fptr, " first : %d\n", a);
//     fprintf(fptr, " second : %d\n", b);
//     int sum = a + b;
//     fprintf(fptr, "sum :%d", sum);
// fclose(fptr);
//     return 0;
// }

#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("sum1.txt", "r");
    int a, b;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);
    fclose(fptr);
    // FILE *fptr;
    fptr = fopen("sum1.txt", "w");
 int sum =  a+b;
    fprintf(fptr, "sum : %d",  sum);
    fclose(fptr);
    return 0;
}