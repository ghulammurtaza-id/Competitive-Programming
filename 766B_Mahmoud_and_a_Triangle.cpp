#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
 
void solve() {
    ll n;
    cin>>n;
    vll v(n);
    for(auto &a:v) cin>>a;
    sort(all(v));
    for(int i=0;i<n-2;i++){
        int a = v[i];
        int b = v[i+1];
        int c = v[i+2];
        if(a+b>c){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
 
}
int main() {
    int t = 1;
    //cin >> t;   
    while (t--) solve();
    return 0;
}