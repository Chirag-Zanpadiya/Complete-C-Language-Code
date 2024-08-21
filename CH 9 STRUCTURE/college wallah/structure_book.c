#include <stdio.h>
#include<string.h>
struct book
{
    char name[50];
    float price;
    int n_pages;
}a,b,c;
int main()
{
    strcpy(a.name,"secret seven");
    a.n_pages=125;
    a.price= 425.30;

    strcpy(b.name , "Rich dad and poor Dad ");
    b.n_pages =250;
    b.price= 450.632;

    strcpy(c.name , "Atomic Habbits");
    b.n_pages =300;
    b.price= 500.963;

    printf("For first book : \n");
    printf("name : %s\n",a.name);
    printf("pages : %d\n",a.n_pages);
    printf("price : %f\n",a.price);
    

    printf("For second book :\n");
    printf("name : %s\n",b.name);
    printf("pages : %d\n",b.n_pages);
    printf("price : %f\n",b.price);
    

    printf("For third book :\n");
    printf("name : %s\n",c.name);
    printf("pages : %d\n",c.n_pages);
    printf("price : %f\n",c.price);
    
    return 0;
}