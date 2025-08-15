#include<stdio.h>
void decreasing(int x){
    if(x==0) return ;
  //int decreasing (int x){  we can use these also
    //if(x==0) return 1;
    printf("%d\n",x);
    decreasing(x-1);

}
int main(){
    int n;
printf(" enter number : ");
scanf("%d",&n);
decreasing(n);
    return 0;
}