#include <stdio.h>
typedef struct account
{
    int acn;
    char name[100];

} acc;
int main()
{
    acc s1 = {149, "chirag"};
    acc s2 = {150, "aryan"};
    acc s3 = {148, "yadav"};
    printf("You acn : %d and name is :  %s\n", s1.acn, s1.name);
    printf("You acn : %d and name is :  %s\n", s2.acn, s2.name);
    printf("You acn : %d and name is :  %s\n", s3.acn, s3.name);

    return 0;
}