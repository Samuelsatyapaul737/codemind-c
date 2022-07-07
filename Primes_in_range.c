#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
    if(n==1)
    {
        return 0;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a,b,c=0;
    cin>>a>>b;
    for(int i=a;i<(b+1);i++)
    {
        if(prime(i))
        {
          c++;
        }
    }
    if(c>0)
    {
        cout<<c;
    }
    else
    {
        cout<<"-1";
    }
}
