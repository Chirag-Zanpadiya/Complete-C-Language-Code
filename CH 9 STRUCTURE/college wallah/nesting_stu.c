#include <stdio.h>
#include <string.h>
typedef struct pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[20];
} pokemon;
typedef struct legendarypokemon
{
    pokemon normal;
    char ability[20];
} legendarypokemon;
typedef struct godpokemon
{
    legendarypokemon ledend;
    int s_attck;

} godpokemon;
int main()
{
    godpokemon arceus;
    arceus.s_attck = 150;
    strcpy(arceus.ledend.ability, "Turnintostone");
    arceus.ledend.normal.attack = 150;
    arceus.ledend.normal.hp = 150;

    strcpy(arceus.ledend.normal.name, "arceus");
    printf("%s", arceus.ledend.normal.name);
    return 0;
}



// #include<stdio.h>
// #include<string.h>
// typedef struct student{
//     int roll;
//     char name[20];
//     int marks;
// }student;
// typedef struct marks{
//     student normal;
//     int phy;
//     int chem;
//     int maths;

// }marks;
// typedef struct per{
// marks legend;
// float per;

// }per;

// int main (){
//     per s1;
//     s1.per = 98.32;
//     s1.legend.chem= 98;
//     s1.legend.phy= 99;
//     s1.legend.maths= 100;
//     s1.legend.normal.roll= 149;
//     strcpy(s1.legend.normal.name,"chirag");
//     printf("%s",s1.legend.normal.name);
//     return 0;
// }