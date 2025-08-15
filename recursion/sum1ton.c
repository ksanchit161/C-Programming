#include<stdio.h>
int increasing(int x, int y){
    if(x>y) return 0 ;
   return x+ increasing(x+1,y);
}

int main(){
     int n;
    printf(" enter number : ");
    scanf("%d",&n);
 int sum = increasing(1,n);    
 printf("%d", sum);
    return 0;
}