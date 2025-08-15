#include<stdio.h>
void increasing(int x, int y){
    if(x>y) return ;
    printf("%d\n",x);
    increasing(x+1,y);

}

int main(){
     int n;
    printf(" enter number : ");
    scanf("%d",&n);
 increasing(1,n);    
    return 0;
}