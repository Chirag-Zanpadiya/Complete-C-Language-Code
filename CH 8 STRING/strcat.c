// //  strcat means joined two string
// #include <stdio.h>

// #include <string.h>
// int main()
// {
//     char s1[10000] = "Chirag";
//     char s2[] = " bhai";
//     strcat(s1, s2);
//     puts(s1);

//     return 0;
// }
#include<stdio.h>
#include<string.h>

int main (){
    char s1[] = "chirag ";
    char s2[] ="bhai";
    printf("%s ",strcat(s1,s2));
    return 0;
}