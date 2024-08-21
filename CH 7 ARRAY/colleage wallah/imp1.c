#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int x;
    int c = 0;
    printf("Enter your number to find the sum\n");
    scanf("%d", &x);
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                printf("(%d,%d)\n", arr[i], arr[j]);
                c++;
            }
        }
    }
    printf("%d pairs\n", c);
    return 0;
}
// clear
// clear
// clear