#include<stdio.h>
int main(){
int a,b,c;
for(int i=1;i<=500;i++)
{ 
    int s=i;
    a=s%10;
    s=s/10;
    b=s%10;
    s=s/10;
    c=s%10;
    s=s/10;

if(i == a*a*a + b*b*b + c*c*c){
    printf("%d\n",i);
}
}
return 0;
}