#include<stdio.h>
// At time only one member can acces
// largest member memory can make
typedef struct pokemon
{
    int hp;
    int speed;
    int attack;

} pokemon;
int main (){
    pokemon p={100,120,130};

    return 0;
}