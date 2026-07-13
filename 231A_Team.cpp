#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define rep(i,n) for(int i = 0; i < (n); i++)
 
void solve() {
 
    int n;
    cin >> n;
 
    int ans = 0;
 
    rep(i,n) {
        int a,b,c;
        cin >> a >> b >> c;
 
        if(a + b + c >= 2) {
            ans++;
        }
    }
 
    cout << ans << endl;
}
 
int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}