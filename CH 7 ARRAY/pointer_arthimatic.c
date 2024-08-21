// Increment with the one data type... when (ptr++)...
#include <stdio.h>


// int main()
// {
//     int age = 22;
//     int *ptr = &age;
//     printf("Address of the ptr = %d\n", ptr);
//     // ptr++;
//     ptr--;
//     printf("Address of the ptr = %d\n", ptr);

//     return 0;
// }

// pointer arthimatic..

// #include<stdio.h>

int main (){
    float a = 20.23;
    float *ptr = &a;
    printf("Address of the ptr = %d\n",ptr);
    ptr ++;
    printf("Address of the ptr = %d\n",ptr);

    return 0;
} // increment by bytes

// #include<stdio.h>

// int main (){
//     char a = '*';
//     char *ptr = &a;
//     printf("Addredd of the ptr = %d\n",ptr);
//     ptr ++;
//     printf("Address of the ptr = %d\n",ptr);
//     return 0;
// }

