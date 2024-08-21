// // #include<stdio.h>
// // float per(float n, float m , float y);
// // int main (){
// //     printf("Your percentage is %f\n",per(90,85,97));
// //     return 0;
// // }
// // float per(float n, float m , float y){
// //     return (n + m +y) / 3 ;
// // }

// // #include<stdio.h>
// // float avg(int n , int m, int i);
// // int main (){
// //     // int a, b,c;
// //     printf("Avg is %f\n",avg(2,2,33));

// //     return 0;
// // }
// // float avg(int n , int m, int i){
// // float avg;
// // avg = (float)(n+m+i)/3;
// // return avg;

// // }

// #include<stdio.h>
// float avg(float a , float b , float c);
// int main (){
//     float a = 98.50, b = 99, c = 100;

//     printf("The avg of the all number is %f\n",    avg(a ,b,c));
//     return 0;
// }
// float avg(float a , float b , float c){
// float avg;
// avg = (float)(a + b + c) / 3 ;
// return avg;
// }

#include <stdio.h>
float avg(int n, int m, int y);
int main()
{
    int a = 95, b = 95, c = 100;
    printf("%f", avg(a, b, c));

    return 0;
}
float avg(int n, int m, int y)
{
    float f = (float)(n + m + y) / 3;
    return f;
}