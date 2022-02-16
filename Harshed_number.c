#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    int temp=n;
for(i=0;n>0;i++)
    {
        i=n%10;
        s=s+i;
        n=n/10;
        
    }
    if(temp%s==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}