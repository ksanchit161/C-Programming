#include<stdio.h>
int main (){
int arr[3][3]={{1,0,1},{1,1,1},{0,1,0}};
int maxcount= -1;
int idx =-1;
for(int i=0;i<3;i++){
    int count =0;
    for(int j=0;j<3;j++){
        if(arr[i][j]==1){
count++;
        }
    }
    if(count>maxcount){
        maxcount=count;
        idx=i;
    }
}
printf("the max count is %d and its index is %d ",maxcount,idx);
    return 0;
}