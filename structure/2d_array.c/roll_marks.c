#include<stdio.h>
int main(){
int r;
printf("enter number of rows : ");
scanf("%d",&r);
int c;
printf("enter number of column : ");
scanf("%d",&c);
int arr[r][c];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
{
    printf(" enter (%d,%d) element ",i,j);
    scanf("%d",&arr[i][j]);
}
printf("\n");

}
printf("roll marks\n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
{
    printf("%d   ",arr[i][j]);
}
printf("\n");
}

    return 0;
}