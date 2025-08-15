#include<stdio.h>
int staircase(int n)
{

    if(n==1||n==2) return n;
    int totalways= staircase(n-1)+ staircase(n-2);
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