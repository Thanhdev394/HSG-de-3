#include<bits/stdc++.h>
using namespace std;
const int N=10e5;
int a[N];
bool snt(int n )
{
    int c;
    c=0;
    for(int i=1;i<=n;i++)
    {if(n%i==0)
        c++;
        else
            continue;
        }
    if(c<3)
        return false;
        if(c>3)
        return false;

    if(c==3)
        return true;
    return false;
}
int main()
{
    int n;
    //freopen("bai3.inp","r",stdin);
    //freopen("bai3.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {if(snt(a[i])==true)
        cout<< "YES"<<endl;
        else
            cout<<"NO"<<endl;
        }
}
