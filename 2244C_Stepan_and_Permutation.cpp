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
    ll g = gcd(x,y);
    for(int i=1;i<=n;i++){
        if(i%g!=v[i-1]%g){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main() {
    int t = 1;
    cin >> t;   
    while (t--) solve();
    return 0;
}