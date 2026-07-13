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
    vll v1(n);
    for(auto &a:v1) cin>>a;
    ll m;cin>>m;
    vll v2;
    v2 = v1;
    sort(all(v2));
    vector<ll> p1(n+1,0);
    vector<ll> p2(n+1,0);
    for(int i=1;i<=n;i++){
        p1[i]=v1[i-1]+p1[i-1];
        p2[i]=v2[i-1]+p2[i-1];
    }
    for(int i=0;i<m;i++){
        ll l,r,type;
        cin>>type;
        cin>>l>>r;
        if(type==1){
            cout<<p1[r]-p1[l-1]<<endl;
        }else{
            cout<<p2[r]-p2[l-1]<<endl;
        }
    }
}
int main() {
    int t = 1;
    //cin >> t;   
    while (t--) solve();
    return 0;
}