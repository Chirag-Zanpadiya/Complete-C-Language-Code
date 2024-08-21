// #include <stdio.h>
// struct vectore
// {
//     int x;
//     int y;
// };
// void sum1(struct vectore v1, struct vectore v2, struct vectore sum);
// int main()
// {
//     struct vectore v1 = {10, 20};
//     struct vectore v2 = {30, 80};
//     struct vectore sum = {0};
//     sum1(v1,v2,sum);
//     return 0;
// }
// void sum1(struct vectore v1, struct vectore v2, struct vectore sum)
// {
//     sum.x = v1.x + v2.x;
//     sum.y = v1.y + v2.y;
//     printf("The sum of the x is %d\n", sum.x);

//     printf("The sum of the x is %d\n", sum.y);
// }

#include <stdio.h>
typedef struct vectore
{
    int x;
    int y;
} vec;
void sum1(vec v1, vec v2, vec sum);
int main()
{
    vec v1 = {10, 20};
    vec v2 = {50, 20};
    vec sum = {0};
    sum1(v1, v2, sum);
    return 0;
}
void sum1(vec v1, vec v2, vec sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("The sum of the x elements is %d\n", sum.x);
    printf("The sum of the y elements is %d\n", sum.y);
}