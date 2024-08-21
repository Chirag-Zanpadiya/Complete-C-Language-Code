#include<stdio.h>

int main (){
    FILE *fptr;
    fptr = fopen("int.txt", "r");
    int a;
    fscanf(fptr,"%d",&a);
    printf("%d\n",a);
    fscanf(fptr,"%d",&a);
    printf("%d\n",a);
    fscanf(fptr,"%d",&a);
    printf("%d\n",a);
    fscanf(fptr,"%d",&a);
    printf("%d\n",a);
    fscanf(fptr,"%d",&a);
    printf("%d\n",a);
    fclose(fptr);
    return 0;
}