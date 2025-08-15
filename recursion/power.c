#include<stdio.h>
int power(int x,int y)
{
    if(y==0) return 1;
    int a= power(x,y/2);
    if(y%2==0) return a * a;
    else return x*a*a;
}

int main(){
     int x,y;
    printf(" enter base :  ");
    scanf("%d",&x);
    printf(" enter power :  ");
    scanf("%d",&y);
    int ans = power(x,y);
printf("%d",ans);

    return 0;
}