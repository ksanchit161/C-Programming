#include<stdio.h>
int factorial(int x)
{
    if (x==0) return 1;
int fact=1;
for(int i=2;i<=x;i++)
fact=fact*i;
return fact;
}
int combination (int n, int r)
{
    if(n==0 && r==0 ) return 1;
    int ncr=factorial(n)/( factorial(r) * factorial(n-r) );
    return ncr ;
}

int main(){
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
for(int j=0; j<=i;j++)
{
    printf("%d ",combination(i,j));
}
printf("\n");
    }






    return 0;
}