#include<stdio.h>
int main (){
int arr[3][3]={{10,0,1},{1,1,1},{0,1,0}};
int maxsum =-1;
int idx =-1;
for(int i=0;i<3;i++){
    int sum =0;
    for(int j=0;j<3;j++){
        sum=sum+arr[i][j];
    }
    if(sum>maxsum){
        maxsum=sum;
        idx=i;
    }
}
printf("the max sum is %d and its index is %d ",maxsum,idx);
    return 0;
}

