#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
 
void solve() {
    ll n,m;
    cin>>n>>m;
    vll a(n),b(m);
    for(auto &ai:a) cin>>ai;
    for(auto &bi:b) cin>>bi;
    ll ans = 0;
    sort(all(b));
    ll cur = 0;
    vector<bool> ms(n+1,false);
    for(int i=0;i<m;i++){
        ms[b[i]] = true;
    }
    for(int i=1;i<=n;i++){
        cur +=a[i-1];
        if(ms[i]){
            ans+=abs(cur);
            cur = 0;
        }
    }
    ans+=cur;
    cout<<ans<<endl;
}
 
int main() {
    int t = 1;
    cin >> t;   
    while (t--) {
        solve();
    }
    return 0;
}