// // call by the value.
// #include<stdio.h>
// void swap(int x , int y);
// int main (){
//     int a = 5 ;
//     int b = 6;
//     swap(a,b);
//     printf("The value of the x and y is %d %d\n",a,b);
//     return 0;
// }
// void swap(int x , int y){
// int temp ;
// temp = x;
// x =y ;
// y = temp;
// printf("The value of the x and y is %d %d\n",x,y);

// } // argument copied are passed to the function

#include<stdio.h>

  int swap(int a , int b);
int main (){
    int a , b;
    printf("Enter your two num :");
    scanf("%d %d",&a,&b);
    printf("The value of the a nd b  before is %d %d",a ,b);
    swap(a ,b);////// actual parameteres
    printf("\nThe value of the after  a nd b is %d %d",a ,b);
    return 0;
}
int swap(int a , int b) // formal parameteres
{
    int t;
    t = a ;
    a =b ;
    b =t;
}