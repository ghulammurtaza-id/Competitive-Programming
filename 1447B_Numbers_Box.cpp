#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
 
void solve() {
    ll n, m;
    cin >> n >> m;
    ll arr[n][m];
    ll neg_count = 0;
    ll min_abs = 1e9;
    ll sum = 0;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if(arr[i][j] < 0) neg_count++;
            min_abs = min(min_abs,abs(arr[i][j]));
            sum += abs(arr[i][j]);
        }
    }
    
    if(neg_count%2 == 0) {
        cout << sum << endl;
    } else {
        cout << sum-2*min_abs << endl;
    }
}
 
int main() {
    int t = 1;
    cin >> t;   
    while (t--) solve();
    return 0;
}