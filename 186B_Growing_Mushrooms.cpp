#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
bool ok(pair<double,ll> p1,pair<double,ll> p2){
    if(p1.first!=p2.first) return p1.first>p2.first;
    return p1.second<p2.second;
}
void solve() {
    ll n,t1,t2,k;
    cin>>n>>t1>>t2>>k;
    vector<pair<double,ll>> vp;
    for(int i=1;i<=n;i++){
        int a,b;
        cin>>a>>b;
        double ans1 = (double)a*t1-(a*t1+0.00)*((k+0.00)/100.00)+b*t2;
        double ans2 = (double)b*t1-(b*t1+0.00)*((k+0.00)/100.00)+a*t2;
        vp.push_back({max(ans1,ans2),i});
    }
    sort(all(vp),ok);
    for(auto [y,x]:vp){
        cout<<x<<" "<<fixed<<setprecision(2)<<y<<endl;
    }
}
int main() {
    int t = 1;
    //cin >> t;   
    while (t--) solve();
    return 0;
}