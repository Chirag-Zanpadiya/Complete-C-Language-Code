#include <stdio.h>
#include <string.h>
typedef struct student
{
    char name[100];
    int roll;
    float spi;

} stu;
int main()
{
    stu s1;
    s1.roll = 149;
    s1.spi = 9.85;
    strcpy(s1.name, "chirag");
    printf("Your name is %s\n", s1.name);
    printf("Your name is %d\n", s1.roll);
    printf("your spi is %f\n", s1.spi);
    return 0;
}