//  switch case include only number and character
// break is compulasary for every ends of the cases.
//  
#include<stdio.h>

int main (){
    int month;
    int day;
    printf("Enter your month\n");
    scanf("%d",& month);
    printf("Enter your day\n");
    scanf("%d",& day);
switch(month){
    case 1 : printf("January\n");
    break;
switch(day){
    case 1 : printf("Moday\n");
}

}




    return 0;
}