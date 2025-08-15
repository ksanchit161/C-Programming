/* #include<stdio.h>
void pallindrome(int brr [],int x){
    int a=0;
    for(int i=0,j= x-1;i<=j;i++,j--) 
    {
     if(brr[i]==brr[j])
      a=a+1;
    }
    if(  (x%2==0 && a== x/2 )  || (x%2!=0 && a== x/2 + 1 )) printf("it is a pallindrome ");
    else printf("not pallindrome");
}


int main(){
    int x;
    printf("size of array : ");
    scanf("%d",&x);
int arr[x];
for(int i=0;i<=x-1;i++)
{
 printf("enter %d element : ",i+1);
    scanf("%d",&arr[i]);
}
pallindrome(arr,x);

return 0;

} */

#include <stdio.h>

void palindrome(int brr[], int x) {
    for (int i = 0; i < x / 2; i++) {
        if (brr[i] != brr[x - 1 - i]) {
            printf("Not a palindrome\n");
            return;
        }
    }
    printf("It is a palindrome\n");
}

int main() {
    int x;
    printf("Size of array: ");
    scanf("%d", &x);

    int arr[x];
    for (int i = 0; i < x; i++) {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    palindrome(arr, x);
    return 0;
}
