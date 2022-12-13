#include <bits/stdc++.h>
#define fl;
using namespace std;
typedef long long ll;
const ll N =1e7+7;
ll n ,res,d,a[N],f[N];
void tangtoc()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    //freopen("bai4.inp","r",stdin);
    //freopen("bai4.out","w",stdout);
    tangtoc();
    cin >> n;
    for(ll i=1;i<=n;i++){
        cin >> a[i],f[a[i]]++;
        while(f[a[i]]>2) f[a[++d]]--;
        res +=i-d;
    }
    cout << res;
    return 0;
}
