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
    ll c1= 0;
    ll c2 = 0;
    ll sum = 0;
    ll o1,o2;
    o1 = o2  = 0;
    for(int i=0;i<n;i++){
        if(v[i]==1)
        o1++;
        if(v[i]==-1)
        o2++;
        sum+=v[i];
    }
    if(sum%4==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
 
 
}
int main() {
    int t = 1;
    cin >> t;   
    while (t--) solve();
    return 0;
}