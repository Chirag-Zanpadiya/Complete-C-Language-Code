#include <stdio.h>

int main()
{
    char *str = "chirag";
    puts(str);
    str = "chirag bhai";
    puts(str);
    char cannotchange[] = "chirag";
    puts(cannotchange);
    cannotchange = "chirag bhai"; // array value cannot change by the tomorrow
    puts(cannotchange);

    return 0;
}

// wiht the help of the pointer we can change the string