#include<stdio.h>
#include<limits.h>
int main(){
int max[5]={10,1500,20,56,2};
//int z=max[0];

int z=INT_MIN;//                 LOWEST VALUE

for(int i=0;i<=4;i++){
    if(max[i]>z) z=max[i];
}
printf("%d",z);
return 0;
} 
    

