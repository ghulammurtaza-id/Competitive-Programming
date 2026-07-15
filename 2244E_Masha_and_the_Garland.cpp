#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
 
void solve() {
    ll n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    vll b(n,0);
    for(int i=0;i<n-1;i++){
        b[i] = (s[i]==s[i+1]);
    }
    vll p(n+1,0);
    for(int i=1;i<=n;i++){
        p[i] = p[i-1]+b[i-1];
    }
    for(int i=0;i<q;i++){
        ll l,r,k;
        cin>>l>>r>>k;
        ll c = 0;
        c = p[r-1]-p[l-1];
        if((c+1)/2<=k){cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
int main() {
    int t = 1;
    cin >> t;   
    while (t--) solve();
    return 0;
}