#include <stdio.h>
// #include<stdbool.h>
#include <stdbool.h>

typedef struct data
{
    int day;
    int month;
    int year;

} data;
int main()
{
    data a, b;
    a.day = 28;
    a.month = 12;
    a.year = 2004;
    b.day = 28;
    b.month = 12;
    b.year = 2004;
    bool flag = "true";
    // if(a == b){
    // printf("Same");
    //     } // this is not possible

    if (a.day != b.day)
    {
        flag = "false";
    }
    if (a.month != b.month)
    {
        flag = "false";
    }
    if (a.year != b.year)
    {
        flag = "false";
    }
    if (flag == true)
    {
        printf("same");
    }

    return 0;
}