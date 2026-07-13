#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
 
void solve() {
    ll n,k; 
    cin>>n>>k;
    vll v(n);
    for(auto &a:v) cin>>a;
    vll p(n+1,0);
 
    for(int i=1;i<=n;i++){
        p[i]=v[i-1]+p[i-1];
    }
    int idx = 1;
    int sum = p[k];
    int j=1;
    for(int i=k+1;i<=n;i++){
        int psum = p[i]-p[j];
        //cout<<psum<<" ok"<<endl;
 
        j++;
        if(psum<sum){
            idx = j;
            sum = psum;
        }
    }
 
    cout<<idx<<endl;
}
int main() {
    int t = 1;
    //cin >> t;   
    while (t--) solve();
    return 0;
}