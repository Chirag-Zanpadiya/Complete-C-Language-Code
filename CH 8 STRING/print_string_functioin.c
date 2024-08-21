#include <stdio.h>
void print(char arr[]);
int main()
{
    char s1[] = "chirag";
    char s2[] = "Zanpadiya";
    print(s1);
    print(s2);

    return 0;
}
void print(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}
