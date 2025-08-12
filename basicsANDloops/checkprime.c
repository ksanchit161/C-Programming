#include<stdio.h>
int main(){
int n,a=0;
printf("enter number ");
scanf("%d",&n);
for(int i=2;i<=n-1;i++) if(n%i==0)
{
    a=1;
    break;
}
if(a==0)printf("prime number");
if(a==1)printf("composite number");


    return 0;


}
