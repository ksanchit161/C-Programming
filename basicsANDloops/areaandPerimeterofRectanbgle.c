#include<stdio.h>
int main(){
int length,breadth;
printf("enter length : ");
 scanf("%d",&length);
printf("enter breadth : ");
 scanf("%d",&breadth);
int area=length*breadth;
int perimeter=2*(length+breadth);
 if(area>perimeter)printf("area is greater than perimeter");
else printf("\narea is not greater than perimeter");




    return 0;
}