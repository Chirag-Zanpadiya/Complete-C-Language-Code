// function direct or indirect call by the main function.
//execution start from main function.
// there can be multiple function in a programm.

#include <stdio.h> 
void india();
void french();
int main()
{
    char c;
    printf("Enter your country name I = india and F = french\n");
    scanf("%c", &c);
    if (c == 'I')
    {
        india();
    }
    else
    {

        french();
    }
    return 0;
}
void india()
{
    printf("Namaste ! \n");
}
void french()
{
    printf("Bonjour ! ");
}

