#include<stdio.h>
int main()
{
    char s[10000];
    scanf("%s",s);
    long long int x,c=0,p,k,l,c1=0;
    scanf("%lld",&x);
    for(int i=0;s[i]!=NULL;i++)
    {
        c++;
    }
    p=x/c;
    k=x%c;
    for(int i=0;i<c;i++)
    {
        if(s[i]=='a')
        {
            c1++;
        }
    }
    l=c1*p;
    for(int i=0;i<k;i++)
    {
        if(s[i]=='a')
        {
            l++;
        }
    }
    printf("%lld",l);
}