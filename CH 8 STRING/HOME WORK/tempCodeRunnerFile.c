
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void upper(char name[]);
int main()
{
    char name[100];
    printf("Enter your name to convert lower case into upper case\n");
    scanf("%s", &name);
    upper(name);
    return 0;
}
void upper(char name[])
{
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (isupper(name[i]))
        {
            strlwr(name);
        }
        if (islower(name[i]))
        {
            strupr(name);
        }
    }
    puts(name);
}