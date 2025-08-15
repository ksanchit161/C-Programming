#include<stdio.h>
int main(){
int arr[5]={1,2,3,4,5};
int odd=0, even=0;
for(int i=0;i<=4;i++){
    if(i%2==0) even+=arr[i] ;
    else odd+=arr[i];
}
printf("%d",even-odd);
return 0;
}