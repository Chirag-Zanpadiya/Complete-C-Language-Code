#include <stdio.h>
#include <string.h>
typedef struct student
{
    int roll;
    char name[20];
    char demp[20];
    char coures[20];
    int years;
} student;
void check(student s1, student s2)
{
  int x = strcmp(s1.demp,s2.demp);
  if(x == 0){
        printf("They have a Same department");

  }
  else printf("They not have same department");

}
int main()
{
    student s1, s2;
    strcpy(s1.demp, "CE");
    strcpy(s2.demp, "CE");
    check(s1, s2);

    return 0;
}
