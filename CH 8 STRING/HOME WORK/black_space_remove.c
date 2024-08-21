// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char name[100];
//     int c;
//     printf("Enter your string\n");
//     gets(name);
//     c = strlen(name);
//     printf("The length of the string is %d\n", c);
//     for (int i = 0; i < c; i++)
//     {
//         if (name[i] == ' ')
//         {
//             continue;
//         }
//         printf("%c", name[i]);
//     }

//     return 0;
// }

#include <stdio.h>
void rem(char name[]);

int main()
{
    char name[100];
    printf("Enter your full name : ");
    // scanf("%s", name);
    gets(name);
    rem(name);
    return 0;
}
void rem(char name[])
{
    char ch;
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            continue;
        }
        else
        {
            printf("%c", name[i]);
        }
    }
}