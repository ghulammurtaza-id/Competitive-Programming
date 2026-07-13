#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
// 1 2 3 4  5 6 7 
void solve() {
    ll n;cin>>n;
    string s="RYOGBIV";
    for(int i=0;i<n;i++){
        if(i>=7){
            s+=s[i-4];
        }
    }
    for(int i=0;i<n;i++)
    cout<<s[i];
 
}
int main() {
    int t = 1;
    //cin >> t;   
    while (t--) solve();
    return 0;
}