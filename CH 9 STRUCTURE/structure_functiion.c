#include <stdio.h>
struct student
{
    char name[100];
    int roll;
    float spi;
};
void info(struct student s1);
int main()
{
    struct student s1 = {"chirag", 149, 8.95};
    // printf()
    info(s1);
    s1.roll = 148;
    printf("Yoour roll no is %d\b", s1.roll);
    return 0;
}
void info(struct student s1)
{
    printf("Your name is %s\n", s1.name);
    printf("Your name is %d\n", s1.roll);
    printf("Your name is %f\n", s1.spi);

    // s1.roll = 148;
}

