#include <stdio.h>
void goodnight();
void goodmorning();
void goodafternoon();
int main()
{
 goodnight();
 
 goodafternoon();
    return 0;
}
void goodnight()
{
    printf("Good night bro\n");
    goodmorning();
}
void goodmorning()
{
    printf("Good Mornig bro\n");
}
void goodafternoon()
{
    printf("Good after noon bro\n");
}