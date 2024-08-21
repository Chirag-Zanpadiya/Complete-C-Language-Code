// scanf could not store multiple words woth space
// so we can use gets and puts
//  gets and puts is dangerours hacked may be
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char fullname[25];
//     printf("Enter your full name\n");
//     gets(fullname);
//     // fgets(fullname,25,stdin);
//     printf("Your full name is :");
//     puts(fullname);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char name[100];
//     printf("Enter your name\n");
//     gets(name);
//     puts(name);
//     return 0;
// }
#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    scanf("%s",&name);
    printf("%s",name);
    return 0;
}