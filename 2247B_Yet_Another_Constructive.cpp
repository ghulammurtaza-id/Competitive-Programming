#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
 
void solve() {
    ll n,m,k;
    cin>>n>>k>>m;
    if(k>m){
        cout<<"NO"<<endl;
        return;
    }else{
        cout<<"YES"<<endl;
        
        cout<<m-(k-1)<<" ";
        for(int i=0;i<n-1;i++){
            cout<<1<<" ";
        }
    }
    cout<<endl;
}
int main() {
    int t = 1;
    cin >> t;   
    while (t--) solve();
    return 0;
}