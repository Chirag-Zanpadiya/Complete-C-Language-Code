// #include <stdio.h>

// void gst(float n);
// int main()
// {
//    float n;
//     printf("Enter your number\n");
//     scanf("%f", &n);
//     gst(n);
//     printf("Your value is %f\n", n);

//     return 0;
// }

// void gst(float n)
// {
//     n = n + n * (0.18);
//     printf("Your final value is %0.2f\n", n);
// }
#include <stdio.h>
float gst(float n);
int main()
{
    float n;
    printf("Enter your amount\n");
    scanf("%f", &n);
    printf("Your final amout is %f",gst(n));
    return 0;
}
float gst(float n)
{
    float f = n + (n)*(0.18);
    return f;
}
