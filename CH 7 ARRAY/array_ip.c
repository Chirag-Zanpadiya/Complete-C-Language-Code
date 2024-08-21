#include <stdio.h>

int main()
{
    int marks[3];
    printf("Enter phy marks\n");
    scanf("%d", &marks[0]);
    printf("Enter chem marks\n");
    scanf("%d", &marks[1]);
    printf("Enter maths marks\n");
    scanf("%d", &marks[2]);
    printf("phy = %d ,chem = %d and maths = %d\n", marks[0], marks[1], marks[2]);

    return 0;
} // zero base the indexing
