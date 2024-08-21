// // string print with itteration
// #include <stdio.h>

// int main()
// {
//     char s1[25];
//     char s2[25];
//     printf("Enter your first name\n");
//     scanf("%s", s1);
//     printf("Enter your first name\n");
//     scanf("%s", s2);
//     for (int i = 0; s1[i] != '\0'; i++)
//     {
//         printf("%c", s1[i]);
//     }
//     printf("\n");
//     for (int i = 0; s2[i] != '\0'; i++)
//     {
//         printf("%c", s2[i]);
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    char s1[50];
    char s2[50];
    printf("Enter your first name\n");
    scanf("%s",& s1);
    printf("Enter your first name\n");
    scanf("%s", s2);
    for (int i = 0; s1[i] != '\0'; i++)
    {
        printf("%c", s1[i]);
    }
    printf("\t");
    for (int i = 0; s2[i] != '\0'; i++)
    {
        printf("%c", s2[i]);
    }
    return 0;
} 