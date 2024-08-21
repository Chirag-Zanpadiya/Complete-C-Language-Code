#include <stdio.h>
#include <string.h>

typedef struct student
{
    int roll;
    float per;
    char name[20];

} student;
int main()
{
    student arr[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter %d student name : \n", i + 1);
        scanf("%s", &arr[i].name);
        printf("Enter your roll :\n ");
        scanf("%d", &arr[i].roll);
        printf("Enter your per :\n ");
        scanf("%f", &arr[i].per);
    }
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        printf("student name :  %s\n", arr[i].name);
        printf("your roll : %d\n", arr[i].roll);
        printf("your per : %f\n", arr[i].per);
        printf("\n");
    }

    return 0;
}