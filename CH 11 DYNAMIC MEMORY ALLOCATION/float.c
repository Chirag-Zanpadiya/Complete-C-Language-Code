#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *ptr;
    ptr = (float *)malloc(5 * sizeof(float));
    ptr[0] = 2.5;
    ptr[1] = 2.6;
    ptr[2] = 2.7;
    ptr[3] = 2.8;
    ptr[4] = 2.9;
    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", ptr[i]);
    }

    return 0;
}