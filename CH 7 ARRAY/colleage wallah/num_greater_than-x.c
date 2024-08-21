#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 15, 14, 13, 20};
    int x;
    int c = 0;
    printf("Enter your num to find the num is greater than array elemets\n");
    scanf("%d", &x);
    for (int i = 0; i < 8; i++)
    {
        if (x < arr[i])
        {
            c++;
        }
    }
    printf("There are %d greather than x", c);

    return 0;
}