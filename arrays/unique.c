#include<stdio.h>
#include<stdbool.h>
int main (){
    int arr[9] ={1,2,4,5,2,4,5,1,7};
    for(int i=0;i<9;i++){
        bool flag =false;
            for(int j=0;j<9;j++){
                if(arr[i]==arr[j] && i!=j){
                    flag=true;
                }
            }
            if(flag==false) 
            {
 printf("%d is unique element and its index is %d",arr[i],i);
            break;
            }
        }
return 0;

            }    
    