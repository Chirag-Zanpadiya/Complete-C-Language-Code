// struct is user defined function
// linked with eachother
// same memory address
// elemets are stored in continue memoery location

#include <stdio.h>
struct pokemon
{
    int speed;
    int hp;
    int attack;
    char tier;
}pikachu,new;

int main()
{
// struct pokemon pikachu; 
pikachu.speed = 100;
pikachu.hp = 120;
pikachu.attack=150;
pikachu.tier = 'S';
printf("\n For pikachu : ");
printf("\n speed : %d",pikachu.speed);
printf("\n hp    : %d",pikachu.hp);
printf("\n attack: %d",pikachu.attack);
printf("\n tier  : %c",pikachu.tier);
struct pokemon new;
new.speed = 200;
new.hp = 10;
new.attack=150;
new.tier = 'C';
printf("\n For pikachu : ");
printf("\n speed : %d",new.speed);
printf("\n hp    : %d",new.hp);
printf("\n attack: %d",new.attack);
printf("\n tier  : %c",new.tier);

    return 0;
}







































































































































































































