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
    int ans = -1;
    string s;
    bool flag = false;
    int cnt=  0;
    set<int> st;
    for(int i=0;i<n;i++){
        cin>>s;
        if(flag) continue;
        int o1 = -1;
        for(int j=0;j<m;j++){
            if(s[j]=='G'){
                o1 = j;
                break;
            }
        }
        int o2 = -1;
        for(int j=m-1;j>=0;j--){
            if(s[j]=='S'){
                o2 = j;
            }
        }
        if(o1>o2){
            flag = true;
        }
        st.insert(o2-o1);
    }
    ans = st.size();
    if(flag) ans = -1;
    cout<<ans<<endl;
    //S is candy
}
int main() {
    int t = 1;
    //cin >> t;   
    while (t--) solve();
    return 0;
}