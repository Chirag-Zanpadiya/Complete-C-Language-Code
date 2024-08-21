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
    printf("Your name is %s\n", s1.name);
    struct student *ptr = &s1;
    printf("Your name is %s\n", (*ptr).name);
      printf("Your name is %s\n", ptr->name);
    return 0;
}