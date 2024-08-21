
#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int roll;
    float spi;
};
int main()
{
    struct student s1 = {"chirag", 149, 8.95};
    printf("You name is %s\n", s1.name);
    printf("You roll no is %d\n", s1.roll);
    printf("You spi is %f\n", s1.spi);
    return 0;
}
