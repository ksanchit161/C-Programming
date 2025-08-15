#include<stdio.h>
int staircase(int n)
{

    if(n==0) return 1;
    if(n<0) return 0;
   
    int totalways= staircase(n-1)+ staircase(n-2) + staircase(n-3);
return totalways;
}




int main(){
    int n;
printf("enter number :");
scanf("%d",&n);
int ans=staircase(n);
printf("%d",ans);
    return 0;
}