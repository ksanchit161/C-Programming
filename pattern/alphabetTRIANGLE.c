#include<stdio.h>
int main(){
    int n;
   printf("enter rows : ");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
{
for(int j=65;j<=65+i-1;j++)
{
    char ch=(char)j;
         printf("%c",ch);

    }
   

printf("\n");
}

    return 0;
}