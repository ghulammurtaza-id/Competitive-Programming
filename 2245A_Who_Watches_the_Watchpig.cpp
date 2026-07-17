#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
 
void solve() {
    ll n,m;
    cin>>n>>m;
    string s;cin>>s;
    if(n/2<m){
        cout<<-1<<endl;
        return;
    }
    ll ans = 0;
    for(int i=0;i<m;i++)
    if(s[i]=='L') ans++;
 
    for(int i=n-1;m;m--,i--)
    if(s[i]=='R') ans++;
    cout<<ans<<endl;
    
}
int main() {
    int t = 1;
    cin >> t;   
    while (t--) solve();
    return 0;
}