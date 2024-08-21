// #include<stdio.h>
// #include<ctype.h>
// int main (){
//     char c;
//     printf("Enter your character\n");
//     scanf(" %c",&c);
//     if(isupper(c)){
//         printf("This is upper case\n");
//     }
//     else{
//         printf("This is a lower case\n");
//     }
//     return 0;
// }



#include<stdio.h>
#include<ctype.h>
int main (){
    char c;
    printf("Enter your character :");
    scanf(" %c",&c);
    if(isupper(c)){
        printf("This is a upper case : ");
    }
    else if(islower){
        printf("This is a lower case :");
    }
    return 0;
}