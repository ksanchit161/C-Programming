#include<stdio.h>
int main(){
int m;
printf("enter number of rows : ");
scanf("%d",&m);
int n;
printf("enter number of column : ");
scanf("%d",&n);

int a[m][n];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++)
{
    scanf("%d",&a[i][j]);
}
}
int l1,l2,r1,r2;
printf("enter starting row : ");
scanf("%d",&l1);
printf("enter starting column : ");
scanf("%d",&r1);
printf("enter ending row : ");
scanf("%d",&l2);
printf("enter ending column : ");
scanf("%d",&r2);
if (l1 < 0 || l2 >= m || r1 < 0 || r2 >= n || l1 > l2 || r1 > r2) {
    printf("Invalid submatrix boundaries!\n");
    return 1;
}


for(int i=l1;i<l2+1;i++){
    for(int j=r1;j<r2+1;j++)
{
    printf("%d ",a[i][j]);
}
printf("\n");
}
return 0;
}