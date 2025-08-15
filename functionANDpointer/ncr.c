#include<stdio.h>
int factorial(int x)
{
int fact=1;
for(int i=2;i<=x;i++)
fact=fact*i;
return fact;
}

int main(){
    int n,r;
 printf("enter n : ");
 scanf("%d",&n);
 printf("enter r : ");
 scanf("%d",&r);
int combination = factorial(n)/( factorial(r) * factorial(n-r) );
printf("%d",combination);
    

    return 0;
}