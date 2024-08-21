#include <stdio.h>
#include<string.h>
int main()
{
    FILE *fptr;
    fptr = fopen("student1.txt", "w");
    char name[100];
    int age;
    float spi;
    printf("Enter your name : \n");
    scanf("%s", &name);
    printf("Enter age  : \n");
    scanf("%d", &age);
    printf("Enter spi : \n");
    scanf("%f", &spi);
    fprintf(fptr, "name : %s\n", name);

    fprintf(fptr, "age : %d\n", age);

    fprintf(fptr, "name : %f\n", spi);

    return 0;
}