// \0  == string terminatio
//  character in single code
//  string in double code

#include <stdio.h>

int main()
{
    char name[] = {'c', 'h', 'i', 'r', 'a', 'g', '\0'};
    char name1[] = "chirag";
    char c[] = "chirag bhai";
    printf("%s \n", name1);
    printf("%s \n", name);
    printf("%s \n", c);

    return 0;
}

