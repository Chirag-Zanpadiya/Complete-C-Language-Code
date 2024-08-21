#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100] = "chirag";
    char s2[] = "chirag";
    printf(" The comparision between %d\n",strcmp(s1,s2));
    return 0;
}
// compare by the character by character
// exp = c - b = ascii value is +ve
// b-c = ascii value is -ve