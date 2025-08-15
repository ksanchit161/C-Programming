#include<stdio.h>
void decreasing(int x)
{
        if(x==0) return;
    printf("%d\n",x);
    decreasing(x-1);

}
void increasing(int x , int y)
{
    if(x>y) return;
    printf("%d\n",x);
    increasing(x+1,y);
    
    } 

int main (){
int n;
printf("enter number : ");
scanf("%d",&n);
decreasing(n);
increasing(1,n);
    return 0;
}