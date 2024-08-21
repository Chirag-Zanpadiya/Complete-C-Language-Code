#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int x;
    printf("Enter your number the triplate pairs :");
    scanf("%d", &x);
    int c = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            for (int k = j + 1; k < 8; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    c++;
                    printf("(%d,%d,%d)\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    printf("%d are the pairs\n", c);
    return 0;
}