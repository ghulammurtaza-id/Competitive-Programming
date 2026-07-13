#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
 
void solve() {
    ll n,x,y;
    cin>>n>>x>>y;
    vll v(n);
    for(auto &a:v) cin>>a;
    ll mx = 0;
    for(int i=0;i<n;i++){
        mx+=(v[i]/x)*y;
    }
    ll ans = INT_MIN;
    for(int i=0;i<n;i++){
        ans = max(ans,v[i]+(mx-(v[i]/x)*y));
    }
 
    cout<<ans<<endl;
}
int main() {
    int t = 1;
    cin >> t;   
    while (t--) solve();
    return 0;
}