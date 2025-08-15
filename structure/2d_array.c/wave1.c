#include<stdio.h>
int main(){
    // creating  matrix
int m;
    printf("enter number of rows of  matrix : ");
    scanf("%d",&m);
 int n;
    printf("enter number of column of  matrix : ");
    scanf("%d",&n);
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

printf("\n");

// printing
for(int i=0;i<m;i++){
    if(i%2==0){
    for(int j=0;j<n;j++)
{
    printf("%d ",a[i][j]);
}
printf("\n");
}
else {
    for(int j=n-1;j>=0;j--)
{
    printf("%d ",a[i][j]);
}
printf("\n");
}
}

    return 0;
}