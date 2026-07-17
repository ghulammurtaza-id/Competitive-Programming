#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
 
void solve() {
    ll p,q,l,r;
    cin>>p>>q>>l>>r;
    vector<pair<ll,ll>> vp(p),vq(q);
    for(auto &a:vp) cin>>a.first>>a.second;
    for(auto &a:vq) cin>>a.first>>a.second;
    int ans;
    ans = 0;
    for(int i=l;i<=r;i++){
        bool flag = false;
        for(auto [x,y]:vp){
            for(auto [a,b]:vq){
                int na,nb;
                na = a;
                nb = b;
                na+=i;
                nb+=i;
                if(y<na) break;
                if((na>=x and na<=y) or (x>=na and x<=nb)){
                // cout<<"l is "<<i<<endl;
                // cout<<x<<" "<<y<<endl;
                // cout<<na<<" "<<nb<<endl;
                ans++;
                flag = true;
                break;
                }
 
            }
            if(flag) break;
        }
        
    }
    cout<<ans<<endl;
}
int main() {
    int t = 1;
    //cin >> t;   
    while (t--) solve();
    return 0;
}