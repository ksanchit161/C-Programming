#include<stdio.h>
int main(){
int marks[10]={10,15,20,56,98,78,34,45,56,89};
for(int i=0;i<=9;i++){
if(marks[i]<35) printf("%d\n",i);
}
return 0;
}