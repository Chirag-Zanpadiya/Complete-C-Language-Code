#include <stdio.h>
struct address
{
    int hn;
    int bl;
    char city[100];
    char state[100];
};
void print(struct address add);
int main()
{
    struct address add[5];
    printf("Write the address of the 1st person\n");
    scanf("%d", &add[0].hn);
    scanf("%d", &add[0].bl);
    scanf("%s", &add[0].city);
    scanf("%s", &add[0].state);
    printf("Write the address of the 2st person\n");
    scanf("%d", &add[1].hn);
    scanf("%d", &add[1].bl);
    scanf("%s", &add[1].city);
    scanf("%s", &add[1].state);
    printf("Write the address of the 1st person\n");
    scanf("%d", &add[2].hn);
    scanf("%d", &add[2].bl);
    scanf("%s", &add[2].city);
    scanf("%s", &add[2].state);
    printf("Write the address of the 1st person\n");
    scanf("%d", &add[3].hn);
    scanf("%d", &add[3].bl);
    scanf("%s", &add[3].city);
    scanf("%s", &add[3].state);
    printf("Write the address of the 1st person\n");
    scanf("%d", &add[4].hn);
    scanf("%d", &add[4].bl);
    scanf("%s", &add[4].city);
    scanf("%s", &add[4].state);
    print(add[0]);
    print(add[1]);
    print(add[2]);
    print(add[3]);
    print(add[4]);
    return 0;
}
void print(struct address add)
{
    printf("Your HN ; %d , BL : %d , city : %s , State : %s\n", add.hn, add.bl, add.city, add.state);
}