#include<stdio.h>
#include<limits.h>
int main(){
int arr[5]={1,2,3,100,5};
int brr[5];
for(int i=0;i<=4;i++)
{
    brr[i] = arr[4-i];
    printf("%d\n",brr[i]);
}
return 0;
}
