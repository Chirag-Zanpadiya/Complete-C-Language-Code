#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("chirag.txt", "w");
    fprintf(fptr, "%c", 'C');
    fprintf(fptr, "%c", 'H');
    fprintf(fptr, "%c", 'I');
    fprintf(fptr, "%c", 'R');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'G');
    fclose(fptr);
    return 0;
}