#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
 
void solve() {
    ll n,k;
    cin>>n>>k;
    vll v(n+2);
    for(int i = 1;i<=n;i++){
        cin>>v[i];
    }
    ll idx = 0;
    cin>>idx;
    v[0]=v[n+1]=v[idx];
    ll c1,c2;
    c1 = c2 = 0;
    for(int i=0;i<idx;i++){
        if(v[i]!=v[i+1])
        c1++;
    }
    for(int i=idx;i<n+1;i++){
        if(v[i]!=v[i+1])
        c2++;
    }
    cout<<max(c1,c2)<<endl;
}
int main() {
    int t = 1;
    cin >> t;   
    while (t--) solve();
    return 0;
}