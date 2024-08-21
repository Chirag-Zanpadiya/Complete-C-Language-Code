#include <stdio.h>

int main()
{
    printf("%d\n", 5 == 5);
    printf("%d\n", 5 > 3 && 5 > 6); // and logic
    printf("%d\n", 5 > 3 || 5 > 6); // or logic
    printf(" imp :%d\n", !(5 < 2));       // not logic
    printf("%d\n", 4 == 5);
    printf("%d\n", 5 >= 5);
    printf("%d\n", 5 >= 4);

    printf("%d\n", 5 != 5);

    return 0;
}
// if the condition is true return 1 and if the condition is false return 0