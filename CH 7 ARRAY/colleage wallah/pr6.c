#include <stdio.h>

int main()
{
    int num[26], temp;
    num[0] = 100;
    num[25] = 200;
    temp = num[25];   // temp = 200
    num[25] = num[0]; // num[25] = 100
    num[0] = temp;    // num[0] = 200
    printf("%d %d\n", num[0], num[25]);
    return 0;
}