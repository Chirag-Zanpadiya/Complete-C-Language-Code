// #include <stdio.h>
// float cal(float n);
// int main()
// {
//     float n;
//     printf("Enter your celsius value \n");
//     scanf("%f", &n);
//     printf("The fahrenheit value is %f\n", cal(n));
//     return 0;
// }
// float cal(float n)
// {

//     float far = ((9.0 / 5.0) * n) + 32;
//     return far;
// }


#include<stdio.h>
    float fah( float cal);

int main (){
    float cal;
    printf("ENter your num : ");
    scanf("%f",&cal);
    printf("%f",fah(cal));
    return 0;
}
float fah(float cal){
    float fahr;
    fahr = ((9.0/5.0)* cal) +32 ;
    return fahr;
}