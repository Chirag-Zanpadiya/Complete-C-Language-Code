#include <stdio.h>
float squreArea(float n);
float rectangleArea(float n, float m);
float circleArea(float n);

int main()
{
    float n = 15;
    float m = 65;
    printf("Area of the circle  = %f\n", circleArea(n));
    printf("Area of the squre  = %f\n", squreArea(n));
    printf("Area of the circle  = %f\n", rectangleArea(n, m));

    return 0;
}
float squreArea(float n)
{
    return n * n;
}
float rectangleArea(float n, float m)
{
    return m * n;
}
float circleArea(float n)
{
    return 3.14 * n * n;
}
