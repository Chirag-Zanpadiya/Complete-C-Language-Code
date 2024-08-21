#include <stdio.h>
#include<ctype.h>

int main()
{
    char c;
    printf("Enter your character\n");
    scanf(" %c", &c);
    // printf("%c"rf, c);
    if ( (isdigit(c)))
    {
        printf("Given is digit\n");
    }
    else
    {
        printf("Given is character\n");
    }
    return 0;
}
