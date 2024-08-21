// #include <stdio.h>

// int main()
// {
//     char name[100];
//     char ch;
//     int i = 0;
//     printf("Enter your text\n");
//     while (ch != '\n')
//     {
//         scanf("%c", &ch);
//         name[i] = ch;
//         i++;
//     }
//     name[i] = '\0';
//     puts(name);
//     return 0;
// }

#include <stdio.h>

int main()
{
    char name[200];
    char ch;
    int i = 0;
    printf("Enter your text : \n");
    while (ch != '\n')
    {
        scanf("%c", &ch);
        name[i] = ch;
        i++;
    }
    name[i] = '\0';
    puts(name);
    return 0;
}

