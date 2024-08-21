#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("chirag.txt", "r"); //  if file is not executed put null character
    fptr = fopen("chirag1.txt", "w"); // if file is not executed creat automatically
    fptr = fopen("chirag.txt", "rb");
    fptr = fopen("chirag.txt", "wb");
    
    
    fclose(fptr);
    return 0;
}
// a is used for open to append