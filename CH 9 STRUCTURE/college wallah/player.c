#include <stdio.h>
#include<string.h>
typedef struct criketers
{
    char name[10];
    int age;
    int n_match;
    float avg;
} criketers;
int main()
{
    criketers arr[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter %d player name : \n" ,i+1);
        scanf("%s", &arr[i].name);
        printf("Enter %d player age : \n",i+1);
        scanf("%d", &arr[i].age);
        printf("Enter %d player N_match : \n",i+1);
        scanf("%d", &arr[i].n_match);
        printf("Enter %d player avg : \n",i+1);
        scanf("%f", &arr[i].avg);
    }
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        printf("%d player name : %s \n", i + 1, arr[i].name);
        printf("%d player age: %d \n", i + 1, arr[i].age);
        printf("%d player n_match : %d \n", i + 1, arr[i].n_match);
        printf("%d player name : %f \n", i + 1, arr[i].avg);
        printf("\n");
    }

    return 0;
}