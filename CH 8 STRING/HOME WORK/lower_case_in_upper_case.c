
#include <stdio.h>
#include <string.h>
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
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            name[i] = name[i] - 32;
        }
    }
    puts(name);
}