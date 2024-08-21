// #include <stdio.h>

// int main()
// {
//     char c;
//     printf("Enter your character\n");
//     scanf("%c", &c);
//     printf("%c\n", c);
//     if (c >= 65 && c <= 90)
//     {
//         printf("This is a upper case\n");
//     }
//     else if (c >= 97 && c <= 122)
//     {
//         printf("This is lower case\n");
//     }
//     else
//     {
//         printf("This is wrong character\n");
//     }
//     return 0;
// }

//  With the help of the header file

#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter your character\n");
    scanf(" %c", &ch);
    if (isupper(ch))
    {
        printf("This is a upper case\n");
    }
    else if (islower(ch))
    {
        printf("This is a lower case\n");
    }
    else if(isdigit(ch)){
        printf("This is a digit case\n");

    }
    else
    {

        printf("Invalid sentenceses");
    }
    return 0;
}