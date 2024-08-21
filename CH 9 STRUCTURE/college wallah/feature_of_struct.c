#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    float per;
    char name[10];

} s1, s2, s3;
int main()
{
    strcpy(s1.name, "chirag");
    s1.roll = 149;
    s1.per = 99.22;
    s2 = s1;
    s2.roll= 148;

    printf("%s", s2.name);
    printf("\n%d", s2.roll);
    return 0;
}