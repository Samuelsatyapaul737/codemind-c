#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int p,q,sum=0;
    scanf("%d %d",&p,&q);
    for(i=0;i<n;i++)
    {
        if(a[i]>=p && a[i]<=q)
        {
           sum=sum+a[i];
        }
    }
    printf("%d",sum);
    
}