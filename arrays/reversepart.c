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
printf(" enter starting index : ");
    scanf("%d",&x);
    printf(" enter ending index : ");
    scanf("%d",&y);
reverse(arr,x,y);
for(int i=0; i<n;i++)
{
    printf("%d\n",arr[i]);
}

    return 0;
}