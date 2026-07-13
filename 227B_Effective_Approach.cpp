#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
 
void solve() {
    ll n;
    cin>>n;
    vector<pair<ll,ll>>vp;
    for(int i=0;i<n;i++){
        int tt;
        cin>>tt;
        vp.push_back({tt,i+1});
    }
    ll m;
    cin>>m;
    ll o1,o2;
    o1 = o2 = 0;
    sort(all(vp));
    for(int i=0;i<m;i++){
        int tt;
        cin>>tt;
        tt--;
        auto [x,y] = vp[tt];
        o1 += abs(y);
        o2 +=abs(n-y+1);
    }
    cout<<o1<<" "<<o2<<endl;
}
int main() {
    int t = 1;
    //cin >> t;   
    while (t--) solve();
    return 0;
}