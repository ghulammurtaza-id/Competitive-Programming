#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
 
void solve() {
    ll n,m,k,t;
    cin>>n>>m>>k>>t;
    vll w(k);
    for(int i=0;i<k;i++){
        ll a,b;
        cin>>a>>b;
        w[i] = (a-1)*m+(b-1);
    }
    sort(all(w));
    string c[3] = {"Carrots", "Kiwis", "Grapes"};
    
    for(int i=0;i<t;i++){
        ll a,b;
        cin>>a>>b;
        int ok = (a-1)*m+(b-1);
        auto it = lower_bound(all(w),ok);
        if(it!=w.end() and *it==ok){
            cout<<"Waste"<<endl;
        }else{
            int idx = it-w.begin();
            int ws = ok-idx;
            ws%=3;
            cout<<c[ws]<<endl;
        }
    }
}
int main() {
    int t = 1;
    //cin >> t;   
    while (t--) solve();
    return 0;
}