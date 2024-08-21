#include<stdio.h>

int main (){
    FILE *fptr;
    fptr = fopen("chirag.txt", "r");
    
    
    // fputc('c', fptr);
    // fputc('h', fptr);
    // fputc('i', fptr);
    // fputc('r', fptr);
    // fputc('a', fptr);
    // fputc('g', fptr);
    // fputc('G', fptr);
    // // fputc('', fptr);

    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    

    return 0;
}