#include<stdio.h>
int main(){
int arr[5]={1,2,3,4,5};
int count=0;
int x=6;
for(int i=0;i<=4;i++){
    for(int j=i+1;j<=4;j++)
    {
        if(arr[i]+arr[j]==x){
        printf("%d %d\n",arr[i],arr[j]);
        count+=1;
    }
    
}
}
printf("total pairs are : %d",count);
return 0;
}