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
    ll sum = 0;
    set<int> s;
    for(auto &a:v) cin>>a,s.insert(a);
    if(s.size()<=2){
        cout<<"YES"<<endl;
        return;
    }
    if(s.size()>3){
        cout<<"NO"<<endl;
        return;
    }
    vector<int> ok = {all(s)};
 
    if(ok[1]-ok[0]==ok[2]-ok[1]){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
int main() {
    int t = 1;
    //cin >> t;   
    while (t--) solve();
    return 0;
}