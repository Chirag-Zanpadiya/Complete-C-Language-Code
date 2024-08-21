// #include <stdio.h>

// int main()
// {
//     int n;
//     int i = 1;
//     int sum = 0;
//     printf("Enter your num :");
//     scanf("%d", &n);
//     while (i < n)
//     {
//         if (n % i == 0)
//         {
//             sum = sum + i;
//         }
//         i++;
//     }
//     if (sum == n)
//     {
//         printf("The given number is perfact\n");
//     }
//     else
//     {
//         printf("The given number is not perfact\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int n;
//     int sum = 0;
//     printf("Enter your num : ");
//     scanf("%d", &n);
//     for (int i = 1; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             sum = sum + i;
//         }
//     }
//     if (sum == n)
//     {
//         printf("Given number is perfact");
//     }
//     else
//     {

//         printf("Given number isnot  perfact");
//     }
//     return 0;
// }





#include <stdio.h>
#include <math.h>
int main()
{
  int n;
  int sum=0;
  printf("enter n:");
  scanf("%d",&n);
  for(int i=1;i<n; i++){
    if(n%i==0){
      sum=sum+i;
    }
  }
  if(sum==n){
    printf("perfact numbere");
  }
  else{
    printf("not perfact number");
  }
    return 0;
}