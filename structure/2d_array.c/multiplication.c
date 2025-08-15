#include<stdio.h>
int main(){
    // 1st matrix
    int m;
    printf("enter number of rows of 1st matrix : ");
    scanf("%d",&m);
 int n;
    printf("enter number of column of 1st matrix : ");
    scanf("%d",&n);
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    // 2nd matrix
     int p;
    printf("enter number of rows of 2nd matrix : ");
    scanf("%d",&p);
 int q;
    printf("enter number of column of 2nd matrix : ");
    scanf("%d",&q);
    int b[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
// condition
if(n!=p)
{
     printf(" multiplication is not possible ");
return 0;
}
else{
    // main code
    int res[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            // ith row of a and jth column of b
            for(int k=0;k<n;k++){
                res[i][j]+=a[i][k]*b[k][j];
            }

        }
    }
    // print
      printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ",res[i][j]);
        } 
        printf("\n");
    }
}
  return 0;
}