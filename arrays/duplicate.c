#include<stdio.h>
int main (){
    int arr[] ={1,23,45,23,566,46,454,234};
for(int i=0;i<8;i++){
    for(int j=i+1;j<8;j++)
    {
        if(arr[i]==arr[j]) {
            printf("duplicate number is %d ",arr[i]);
            break;
        }
    }
}






    return 0;
}