#include<stdio.h>
#include<string.h>
void slice(char name, int n , int m);
int main (){
    char name[200];
    printf("Enter your name\n");
    scanf("%s", & name);
    slice(name, 3 ,6);

    return 0;
}
void slice(char name, int n , int m){
int j = 0 ;
char slicename[50];
for(int i= n ; i <= m;i++,j++){
    slicename[j]= name[i];
}
slicename[j]= '\0';
puts(slicename);

}