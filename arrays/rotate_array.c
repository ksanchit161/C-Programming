#include<stdio.h>
void reverse(int arr[], int si, int ei)  //  si- starting index   ei- ending index
{
   for(int i=si, j=ei;i<j;i++,j--) {
    int temp= arr[i];
    arr[i]= arr[j];
    arr[j]=temp;
}
return ;
}


int main(){
    int n,x,y;
    printf(" enter size of array  : ");
    scanf("%d",&n);
    int arr[n];
for(int i=0; i<n;i++)
{
    printf("enter %d element  ",i+1);
scanf("%d",&arr[i]);
}
int k;
printf(" enter k : ");
    scanf("%d",&k);
k=k%n;
reverse(arr,0,n-1);
reverse(arr,0,k-1);
reverse(arr,k,n-1);

for(int i=0; i<n;i++)
{
    printf("%d\n",arr[i]);
}

    return 0;
}