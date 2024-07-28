#include<stdio.h>
#include<limits.h>
int main (){
    int arr[7]={1,4,2,8,19,5,22};
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i <= 6; i++)
    {
       if (max <arr[i])
       {
         max = arr[i];
       }
       
    }
       for (int i = 0; i <= 6; i++)
    {
       if (smax <arr[i] &&arr[i]!=max)
       {
         smax = arr[i];
       }
       
    }
    printf("%d",smax);
    return 0;
}