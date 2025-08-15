#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    int idx= -1;
printf(" enter size of array : ");
scanf("%d",&n);
int arr[n];
for(int i=0; i<n;i++)
{
    printf("enter %d element  ",i+1);
scanf("%d",&arr[i]);
}
  int x;
printf(" enter x  : ");
scanf("%d",&x);
 bool flag = false;
 for(int i=0; i<n;i++)
{
 if(x==arr[i]) {
      idx = i;
       flag=true;
 break;
}
}
if(flag==false){
    printf("%d is not present in array",x);
}
else{
    printf("%d is  present in array and its index is %d",x,idx);
}
    return 0;
}