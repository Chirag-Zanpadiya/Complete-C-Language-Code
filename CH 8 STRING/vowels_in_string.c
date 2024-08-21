#include <stdio.h>
#include <string.h>
int vowel(char name[]);
int main()
{
    char name[100];
    printf("Enter your name to find the vowel in the string\n");
    // scanf("%s", &name);
    gets(name);
    vowel(name);
    printf("There are %d vowels in the string \n", vowel(name));
    return 0;
}
int vowel(char name[])
{
    // char vo[100] = "aeiou";
    int c = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            c++;
        }
    }
    return c;
}