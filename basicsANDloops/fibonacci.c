#include<stdio.h>
int main(){
int n;
printf("enter number : ");
scanf("%d",&n);
int a=0,b=1,sum;
for(int i=1;i<=n;i++){
sum=a+b;
printf("%d\n",sum);
a=b;
b=sum;

}


    return 0;
}
