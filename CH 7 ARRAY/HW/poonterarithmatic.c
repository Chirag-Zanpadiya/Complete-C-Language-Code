#include<stdio.h>

int main (){
    int i = 22;
    int *a = &i;
    printf("%d\n",a++);
    printf("%d\n",a);
    return 0;
}