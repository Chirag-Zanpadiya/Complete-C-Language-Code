// #include <stdio.h>
// int isprime(int n)
// {
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
// int main()
// {
//     int n1, n2;
//     printf("Enter your first number\n");
//     scanf("%d", &n1);
//     printf("Enter your second number\n");
//     scanf("%d", &n2);
//     for (int i = n1; i <= n2; i++)
//     {
//         if (isprime(i))
//         {
//             printf("%d\t", i);
//         }
//     }

//     return 0;
// }



#include<stdio.h>
int isprime(int n){
    for(int  i = 2 ; i*i < n ;i++){
        if(n % i == 0){
            return 0 ;
        }
    }
    return 1;
}
int main (){
    int n1,n2;
    printf("Enter your first num:\n");
    scanf("%d",&n1);
    printf("Enter your second num:\n");
    scanf("%d",&n2);
    for(int i = n1 ; i <= n2; i++){
        if(isprime(i)){
            printf("%d\t",i);
        }
    }
    return 0;
}