#include <stdio.h>
#include <string.h>

int length(char arr[]);
int main()
{
    char name[20];
    printf("Enter your name\n");
    // scanf("%s", name);
    gets(name);
    printf("The length of the string is %d\n", length(name));

    return 0;
}
int length(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] != '\0')
        {
            count++;
        }
    }
    return count;
}

