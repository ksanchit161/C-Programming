#include<stdio.h>
int main(){
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    int a=n;
   
    for(int i=1;i<=n;i++)
    {
         int b=65;
        for(int j=1; j<=n;j++)
        {
            char ch=(char)b;
            if(a < (j+i) )
            {
            printf("%c",ch);
b=b+1;
            }
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}