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
    vll adj[n+1];
    vll deg(n+1,0);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        deg[a]+=1;
        deg[b]+=1;
    }
    bool flag = true;bool ok = false;
    int ans = 0;
    while(flag){
        flag = false;
        ok = false;
        vll ar;
        for(int i=1;i<=n;i++){
            // if we got the situation like that
            // remove all that shit..
            if(deg[i]==1){
                ok = true;
                deg[i]--;
                ar.push_back(i);
            }
        }
        for(auto i:ar){
        for(auto nbr:adj[i]){
            deg[nbr]--;
            if(deg[nbr]==1)
            flag = true;
            }
        }
        if(ok) ans++;
    }
    cout<<ans<<endl;
}
int main() {
    int t = 1;
    //cin >> t;   
    while (t--) solve();
    return 0;
}