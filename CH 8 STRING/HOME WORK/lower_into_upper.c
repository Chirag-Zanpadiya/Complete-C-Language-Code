
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// void upper(char name[]);
// int main()
// {
//     char name[100];
//     printf("Enter your name to convert lower case into upper case\n");
//     scanf("%s", &name);
//     upper(name);
//     return 0;
// }
// void upper(char name[])
// {
//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         if (isupper(name[i]))
//         {
//             // strlwr(name);

//             name[i] = name[i] + 32;
//             // puts(name);
//         }
//     }

//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         if (islower(name[i]))
//         {
//             name[i] = name[i] - 32;
//             // puts(name);
//         }
//     }
//     puts(name);
// }
#include <stdio.h>
#include <ctype.h>

int main()
{
    char name[100];
    printf("Enter your name\n");
    gets(name);
    for (int i = 0; name[i] != 0; i++)
    {
        if (name[i] >= 'A' || name[i] <= 'Z')
        {
            name[i] = name[i] + 32;
        }
        
        else if (name[i] >= 'a' || name[i] <= 'z')
        {
            printf("%c", (name[i] + 32));
        }
    }

    return 0;
}
