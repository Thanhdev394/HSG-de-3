#include<bits/stdc++.h>
using namespace std;
char Maxxx;
int n,res=1; Maxx =0;
string s;
signed main()
{
    cin >> n;
    cin >> s;
    sort(s.begin(),s.end());
    for(int i =1; i<=n;i++)
    {
        if(s[i]==s[i+1])
        {
            res++;
        }
        if(s[i]!=s[i+1])
        {
            cout << s[i] << res +1 << endl;
            if(res>Maxx)
            {
                Maxx = res;
                Maxxx = s[i];
            }

            res=0;
        }
    }
    cout << Maxxx << Maxx;
}
