#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("chirag.txt", "r");
    char ch;
    fscanf(fptr, "%c", &ch);
    printf("The int is %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("The int is %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("The int is %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("The int is %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("The int is %c\n", ch);

    return 0;
}