// #include <stdio.h>
// #include <string.h>

// void present(char name[]);
// int main()
// {
//     char name[100];
//     printf("Enter your string\n");
//     scanf("%s", &name);
//     present(name);
//     return 0;
// }
// void present(char name[])
// {
//     char ch;
//     printf("Enter your particular character\n");
//     scanf(" %c", &ch);
//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         if (name[i] == ch)
//         {
//             printf("This  %c is  present in the string", ch);
//             return;
//         }
//     }
//     printf("This %c is not present is the string\n", ch);
// }

#include <stdio.h>
#include <string.h>
int pre(char s1[]);
int main()
{
    char s1[100];
    printf("Enter your string :");
    scanf("%s", &s1);
    pre(s1);
    return 0;
}
int pre(char s1[])
{
    char c;
    printf("Enter your particular character :");
    scanf(" %c", &c);
    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] == c)
        {
            printf("Yes it is present :\n");
            return;
        }
       
    }
    printf("It is not present :");
    return 0;
}