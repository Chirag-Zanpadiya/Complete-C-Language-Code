// #include <stdio.h>
// float percentage(float c, float p, float m);
// int main()
// {
//     float c, p, m;
//     printf("Enter your physics, chemistry and maths marks\n");
//     scanf("%f%f%f", &c, &p, &m);
//     printf("The percentage of the given marks is %f\n", percentage(c, p, m));
//     return 0;
// }
// float percentage(float c, float p, float m)
// {
//     float percentage3 = (float)(c + p + m) / 3;
//     return percentage3;
// }

#include <stdio.h>
float avg(float c, float m, float p);
int main()
{
    float c = 79;
    float m = 87;
    float p = 34;
    printf("%f", avg(c, m, p));
    return 0;
}
float avg(float c, float m, float p)
{
    float avg3 = (float)((c + m + p) / 3);

    return avg3;
}