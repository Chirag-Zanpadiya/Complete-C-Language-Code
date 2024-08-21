#include<stdio.h>
void print(int arr[],int n );
int main (){
    int arr[] = {10 ,20,30,40,50,60,70};
    print(arr, 7);
    return 0;
}
void print(int arr[],int n ){
    for(int i = 0 ; i < n; i++ ){
        printf("%d\t",arr[i]);
    }
}