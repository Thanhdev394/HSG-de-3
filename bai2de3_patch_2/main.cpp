#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n,c;
int main()
{
    char r ;
    int res=0,maxx=0;
    string s ;
    cin>> n;
    cin>>s;
    sort(s.begin(),s.end());
    for (int i=0;i<=n-1;i++)
        {
            if(s[i]==s[i+1])
            res++;
            if(res+1>maxx)
        {
            maxx=res+1;
            r=s[i];
        }
        if(s[i]!=s[i+1])

        {
 cout<<s[i]<<res+1<<endl;

        res=0;}
        }
        cout<<r<<maxx;
    return 0;
}
