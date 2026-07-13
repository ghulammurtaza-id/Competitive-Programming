#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define rep(i,n) for(int i = 0; i < (n); i++)
 
void solve() {
 
    int n,m;
    cin >> n >> m;
 
    vector<ll> a(n+m);
    for(auto &ai:a) cin>>ai;
    sort(a.begin(),a.end()-1);
	reverse(a.begin(),a.end());
		
    ll ans = 0;
    rep(i,n) ans += a[i];
 
    cout << ans << endl;
}
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}