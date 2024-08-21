// #include <stdio.h>
// int length(char arr[]);
// int main()
// {
//     char name[50];
//     printf("Enter your name\n");
//     scanf("%s", &name);
//     printf("%d times occures c\n", length(name));
//     return 0;
// }
// int length(char arr[])
// {
//     int c = 0;
//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         if (arr[i] == 'c')
//         {
//             c++;
//         }
//     }
//     return c;
// }

#include<stdio.h>
#include<string.h>
int occ(char name[]);
int main (){
    char name[100];
    printf("Enter your string : ");
    scanf("%s",&name);
    // occ(name);
    printf("%d times the ",occ(name));
    return 0;
}
int occ(char name[]){
    int c = 0 ;
    for(int i = 0 ;name[i] != '\0';i++){
        if(name[i] == 'c'){
            c ++;
        }
    }
    return c;
}