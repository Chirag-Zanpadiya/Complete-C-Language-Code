#include<stdio.h>

int main (){
    int i = 22;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("The value of the i is %d\n",*ptr);
    printf("The value of the i is %d\n",**pptr);
    return 0;
}