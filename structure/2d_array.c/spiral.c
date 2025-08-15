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

// some variables
int minr=0;
int minc=0;
int maxr=m-1;
int maxc=n-1;
int tc=m*n;
int count=0;
while(tc>count){

// print minimum row
for(int j=minc;j<=maxc && tc>count ;j++){
    printf("%d ",a[minr][j]);
    count++;
}
minr++;

// print maximum column
for(int i=minr;i<=maxr && tc>count ;i++){
     printf("%d ",a[i][maxc]);
     count++;
}
maxc--;

//  print maxium row
for(int j=maxc;j>=minc && tc>count ;j--){
    printf("%d ",a[maxr][j]);
    count++;
}
maxr--;

// print minimum column
for(int i=maxr;i>=minr&& tc>count  ;i--){
    printf("%d ",a[i][minc]);
    count++;
}
minc++;

}
   return 0;
}












