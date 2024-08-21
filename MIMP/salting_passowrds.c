// #include<stdio.h>
// #include<string.h>
// void salting(char pass[]);
// int main (){
//     char pass[100];
//     printf("Enter your passwords\n");
//     scanf("%s", & pass);
//     salting(pass);
//     return 0;
// }
// void salting(char pass[]){
// char salt[] = "@ZCA0405";
// char newpass[200];
// strcpy(newpass,pass);
// strcat(newpass,salt);
// puts(newpass);

// }
#include<stdio.h>
#include<string.h>
void salting(char name[]);
int main (){
    char name[100];
    printf("Enter your passwords\n");
    scanf("%s", & name);
    salting(name);
    return 0;
}
void salting(char name[]){
char salt[] = "@#$^&*&*";
char newstr[200];
strcpy(newstr,name);
strcat(newstr,salt);
puts(newstr);

}
