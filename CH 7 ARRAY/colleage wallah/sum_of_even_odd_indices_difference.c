#include <stdio.h>

int main()
{
    int sumofodd = 0;
    int sumofeven = 0;
    int arr[] = {1, 3, 5, 7, 9, 11};
    for (int i = 0; i < 6; i++)
    {
        if (i % 2 != 0)
        {
            sumofodd = sumofodd + arr[i];
        }
        else
        {
            sumofeven = sumofeven + arr[i];
        }
    }
    printf("The sumofeven - sumofodd : %d - %d = %d\n", sumofeven, sumofodd, sumofeven - sumofodd);
    return 0;
}