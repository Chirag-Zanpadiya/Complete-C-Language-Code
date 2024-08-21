#include <stdio.h>
#include <string.h>
typedef struct pokemon
{
    int hp;
    int speed;
    int attack;
    char name[20];
    char tier;
} pokemon; // pokemon is usef defined data type function

void change(pokemon *p)
{
    p->hp = 120;
    // (*p).hp = 120; //
    // (*p).speed = 130;
    p->speed = 130;
    p->attack = 160;
    strcpy((*p).name, "chirag");
    p->tier = 'B';
}
int main()
{
    pokemon pikachu ={110,120,150,"pokemon",'A'}; // order wise write
    // pikachu.hp = 110;
    // pikachu.speed = 120;
    // pikachu.attack = 150;
    // strcpy(pikachu.name, "pokemon");
    // pikachu.tier = 'A';
    pokemon *x = &pikachu;

    printf("%d\n", (*x).hp);
    printf("%d\n", (*x).speed);
    printf("%d\n", (*x).attack);
    printf("%s\n", (*x).name);
    printf("%c\n", (*x).tier);
    // printf("\t");

    change(&pikachu);

    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.speed);
    printf("%d\n", pikachu.attack);
    printf("%s\n", pikachu.name);
    printf("%c\n", pikachu.tier);
    printf("\t");
    return 0;
}