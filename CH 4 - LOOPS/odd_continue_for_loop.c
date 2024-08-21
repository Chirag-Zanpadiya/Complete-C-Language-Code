// #include <stdio.h>

// int main()
// {
//     int n;
//     for (int i = 1;; i++)
//     {
//         printf("Enter your number\n");
//         scanf("%d", &n);
//         if (n % 2 != 0)
//         {

//             printf("This is an odd\n");
//             break;
//         }
//     }
//     return 0;
// }


// do while loops
#include<stdio.h>

int main (){
    int n ;
    printf("Enter your number to find the given number is odd and even\n");
    do{
printf("Enter your number\n");
scanf("%d",&n);
if(n % 2 == 0){
    printf("This is a even number\n");
    break;
}

    }while(1);
    return 0;
}