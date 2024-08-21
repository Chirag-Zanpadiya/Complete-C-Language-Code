#include<stdio.h>

int main (){
    int c[] ={10,20,30}; 
    // int *ptr = &c[0];
    int *ptr = c;
    printf("%d\n", *ptr);
    *ptr ++;
    printf("%d", *ptr);


    return 0;
}