#include<stdio.h>
int main(){
int n;
printf("enter a number");
scanf("%d",&n);
int lastdigit;
lastdigit=n%10;
while(n>0){
       
    lastdigit=lastdigit*10;
   
    n=n/10;
 lastdigit=lastdigit+ n%10;
}
lastdigit=lastdigit/10;
printf("reverse number is : %d",lastdigit);
    return 0;
}