#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    cout<<s;
}