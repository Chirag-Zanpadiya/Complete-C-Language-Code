#include <stdio.h>
#include <string.h>

void present(char name[]);
int main()
{
    char name[100];
    printf("Enter your string\n");
    scanf("%s", &name);
    present(name);
    return 0;
}
void present(char name[])
{
    char ch;
    printf("Enter your particular character\n");
    scanf(" %c", &ch);
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ch)
        {
            printf("This is  present in the string");
            break;
        }
        else
        {
            printf("This is not present in the string\n");
            break;
                }
    }
}