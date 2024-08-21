#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i = 0;
    int j = 4;
    int c = 0;
    while (i < j)
    {
        if (arr[i] + arr[j] == 4)
        {
            c++;
        }
        else if (arr[i] + arr[j] > 4)
        {
            j--;
        }
        else if (arr[i] + arr[j] < 4)
        {
            i++;
        }
    }
    printf(" %d ", c);
    return 0;
}