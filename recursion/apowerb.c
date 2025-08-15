#include<stdio.h>
int power(int a,int b) 
/* {                                
       int power=1;               ( using function )
    for(int i=1;i<=b;i++)
{ 
    power=power*a;
}
return power;
}  */
{  
    if(b==0) return 1;  // using recursion
    return a * power(a,b-1);
}          


int main()
{
    int x,y;
    printf(" enter base :  ");
    scanf("%d",&x);
    printf(" enter power :  ");
    scanf("%d",&y);
    int ans = power(x,y);
printf("%d",ans);
}