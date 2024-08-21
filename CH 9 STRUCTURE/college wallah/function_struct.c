// structure are pass by value..
#include <stdio.h>
#include <string.h>
typedef struct pokemon
{
    int hp;
    int speed;
    int attack;
} pokemon;
void change(pokemon p)
{
    p.attack = 110;
    p.hp = 1100;
    p.attack = 300;
}
int main()
{
    pokemon pikachu;
    pikachu.attack = 100;
    pikachu.hp = 1000;
    pikachu.speed = 200;
    change(pikachu); // int x x pass karna
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.speed);
    return 0;
} // struct is pass by value
