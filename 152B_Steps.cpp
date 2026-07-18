#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
/*
 
*/
 
ll ans = 0;
ll n,m;
ll st,en;
void fun(ll x,ll y,ll i,ll j){
    ll l = 0,h = 1000000000;
    ll ok = 0;
    while(l<=h){
        ll md = l+(h-l)/2;
        ll ni = md*x+i;
        ll nj = md*y+j;
        if(ni>=1 and nj>=1 and ni<=n and nj<=m){
            ok = md;
            l = md+1; 
        }else{
            h = md-1;
        }
    }
    st = ok*x+i;
    en = ok*y+j;
    ans+=ok;
}
void solve() {
    cin>>n>>m;
    cin>>st>>en;
    ll k;
    cin>>k;
    vector<pair<ll,ll>> vp(k);
    for(auto &[x,y]:vp) cin>>x>>y;
    bool flag = true;
    for(auto [x,y]:vp){
        fun(x,y,st,en);    
    }
    cout<<ans<<endl;
    
}
int main() {
    int t = 1;
    //cin >> t;   
    while (t--) solve();
    return 0;
}