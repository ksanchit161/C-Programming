#include<stdio.h>
#include<limits.h>
int main(){
int arr[5]={1,2,3,100,5};
int max = INT_MIN , smax = INT_MIN ;
for(int i=0;i<=4;i++)
{
    if(arr[i]>max) 
    {
        smax=max;
        max=arr[i];
}
else if (max!=arr[i] && smax<arr[i]) smax=arr[i];
}
printf("%d",smax);
return 0;
}