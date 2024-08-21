#include<stdio.h>
#include<string.h>

struct student{

char name[50];
int roll;
float per;

}s1,s2,s3;
int main (){
    strcpy(s1.name,"chirag");
    s1.roll= 149;
    s1.per= 90.12;
    
    strcpy(s2.name,"jenil");
    s2.roll= 90;
    s2.per= 80.12;
    
    strcpy(s3.name,"bhagy");
    s3.roll= 98;
    s3.per= 84.12;
    
    printf("for 1st student : \n");
    printf("name : %s\n",s1.name);
    printf("roll : %d\n",s1.roll);
    printf("per  : %f\n",s1.per);
    
    printf("for 2st student : \n");
    printf("name : %s\n",s2.name);
    printf("roll : %d\n",s2.roll);
    printf("per  : %f\n",s2.per);
    
    printf("for 3st student : \n");
    printf("name : %s\n",s3.name);
    printf("roll : %d\n",s3.roll);
    printf("per  : %f\n",s3.per);
    return 0;
}