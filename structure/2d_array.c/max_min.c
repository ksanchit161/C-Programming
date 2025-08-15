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
}
int min = arr[0][0];
int max= arr[0][0];
int mindx1 =0;
int mindx2 =0;
int maxdx1 =0;
int maxdx2 =0;

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
{
if(min>arr[i][j])
{
     min=arr[i][j];
     mindx1=i;
     mindx2=j;
}
if(max<arr[i][j])
{
    max=arr[i][j];
    maxdx1=i;
    maxdx2=j;
}
}
}
printf("mininimum value is %d and its index is (%d,%d)\n",min,mindx1,mindx2);

printf("maximum value is %d and its index is (%d,%d)",max,maxdx1,maxdx2);



return 0;
}