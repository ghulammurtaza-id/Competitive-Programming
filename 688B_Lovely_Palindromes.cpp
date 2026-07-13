#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
 
void solve() {
    string s;
    cin>>s;
    string rs;
    for(auto a:s)rs.push_back(a);
    reverse(all(rs));
    string ans;
    ans = s;
    for(auto a:rs)ans.push_back(a);
    cout<<ans<<endl;
}
int main() {
    int t = 1;
    //cin >> t;   
    while (t--) solve();
    return 0;
}