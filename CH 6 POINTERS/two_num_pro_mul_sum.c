// #include <stdio.h>
// void dowork(int a, int b, int *sum, int *pro, int *avg);
// int main()
// {
//     int a, b;
//     printf("number 1 : \n");
//     scanf("%d", &a);
//     printf("Number 2 :\n");
//     scanf("%d", &b);
//     int sum = 0, pro = 0, avg = 0;
//     dowork(a, b, &sum, &pro, &avg);
//     printf("sum = %d, pro = %d,avg = %d\n", sum, pro, avg);

//     return 0;
// }
// void dowork(int a, int b, int *sum, int *pro, int *avg)
// {
//     *sum = a + b;
//     *pro = a * b;
//     *avg = (a + b) / 2;
// }

// #include <stdio.h>

// int work(int a, int b, int *sum, int *pro, int *mul);
// int main()
// {
//     int a, b;
//     printf("Enter your two nums : ");
//     scanf("%d %d", &a, &b);
//     int sum = 0, pro = 0, avg = 0;
//     work(a, b, &sum, &pro, &avg);
//     printf("sum = %d , pro = %d and avg = %d", sum, pro, avg);
//     return 0;
// }
// int work(int a, int b, int *sum, int *pro, int *avg)
// {
//     *sum = a + b;
//     *pro = a * b;
//     *avg = (float)((a + b)/(2));
// }
#include <stdio.h>

int dowork(int a, int b, int *pro, int *sum, float *avg);
int main()
{
    int a, b;
    int pro, sum;
    float avg;
    scanf("%d %d", &a, &b);

    // printf("sum = %d , pro = %d , avg = %f\n", sum, pro, avg);
    dowork(a, b, &pro, &sum, &avg);
    printf("\nsum = %d , pro = %d , avg = %f\n", sum, pro, avg);
    return 0;
}
int dowork(int a, int b, int *pro, int *sum, float *avg)
{
    *pro = a * b;
    *avg = (float)(a + b) / 2;
    *sum = a + b;
}