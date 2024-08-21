//  switch case include only number and character
// break is compulasary for every ends of the cases.
//
#include <stdio.h>

int main()
{
    int month;
    int day;
    printf("Enter your month\n");
    scanf("%d", &month);
    printf("Enter your day\n");
    scanf("%d", &day);
    switch (month)
    {
    case 1:
        printf("January ");

        switch (day)
        {

        case 1:
            printf("monday\n");
            break;
        case 2:
            printf("tuesday\n");
            break;
        case 3:
            printf("wensday\n");
            break;
        case 4:
            printf("thursday\n");
            break;
        case 5:
            printf("friday\n");
            break;
        case 6:
            printf("satureday\n");
            break;
        case 7:
            printf("sunday\n");
            break;
        }
        break;
    case 2:
        printf("Frebuary\n");

        switch (day)
        {

        case 1:
            printf("monday\n");
            break;
        case 2:
            printf("tuesday\n");
            break;
        case 3:
            printf("wensday\n");
            break;
        case 4:
            printf("thursday\n");
            break;
        case 5:
            printf("friday\n");
            break;
        case 6:
            printf("satureday\n");
            break;
        case 7:
            printf("sunday\n");
            break;
        }
        break;
    }

    return 0;
}
