#include <stdio.h>
int high(char name[]);
int main()
{
    char name[100];
    printf("Enter your name\n");
    // scanf("%s", &name);
    gets(name);
    printf("%d   is highet frequncy of %c", high(name),high(name));
    return 0;
}
int high(char name[])
{
    int max = name[0];
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (max < name[i])
        {
            max = name[i];
        }
    }
    return max;
}