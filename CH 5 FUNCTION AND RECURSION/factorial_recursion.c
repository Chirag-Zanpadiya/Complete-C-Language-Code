// #include <stdio.h>
// int fact(int n);
// int main()
// {
//     int n;
//     printf("Enter your number to find the factorial\n");
//     scanf("%d", &n);
//     printf("The factorial of %d is  %d\n", n, fact(n));
//     return 0;
// }
// int fact(int n)
// {
//     if (n == 1 || n == 0)
//     {
//         return 1;
//     }
//     int factnma = fact(n - 1);
//     int factn = fact(n - 1) * n;
//     return factn;
// }
// // chirag

// #include <stdio.h>
// int fact(int n);
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     printf("Fact = %d", fact(n));
//     return 0;
// }
// int fact(int n)
// {
//     if (n == 1 || n == 0)
//     {
//         return 1;
//     }
//     int factn = fact(n - 1) * n;
//     return factn;
// }

#include<stdio.h>
int fact(int n);
int main (){
    int n = 5 ;
    printf("%d",fact(n));
    return 0;
}
int fact(int n){
if(n == 0 || n== 1){
    return 1;
}

    return fact(n-1)*n;
}