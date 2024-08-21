#include <stdio.h>

int main()
{
    float price[3];
    printf("Enter your first item marks\n");
    scanf("%f", &price[0]);
    printf("Enter your first item marks\n");
    scanf("%f", &price[1]);
    printf("Enter your first item marks\n");
    scanf("%f", &price[2]);
    price[0] = price[0]+ price[0]*0.18;
    price[1] = price[1]+ price[1]*0.18;
   price[2] = price[2]+ price[2]*0.18;
    printf("Your final Gst is 1)%f , 2)%f, 3)%f\n", price[0], price[1], price[2]);
    return 0;
}