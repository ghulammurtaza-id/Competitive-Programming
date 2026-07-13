#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
/*
 
*/
void solve() {
    ll n,f;
    cin>>n>>f;
    ll sum =0;
    priority_queue<pair<ll,pair<ll,ll>>> pq;
    for(int i=0;i<n;i++){
        ll k,l;
        cin>>k>>l;
        if(l<=k){
            sum+=l;
            continue;
        }else{
            ll benefit=0;
            //l>k
            ll up = k*2;
 
            ll ok= min(up,l);
            benefit = ok-k;
            pq.push({benefit,{k,ok}});
        }
    }
    while(!pq.empty() and f){
        auto [x,y]=pq.top();
        pq.pop();
        sum+=y.second;
        f--;
    }
    while(!pq.empty()){
        auto [x,y] = pq.top();
        pq.pop();
        sum+=y.first;
    }
    cout<<sum<<endl;
}
int main() {
    int t = 1;
    //cin >> t;   
    while (t--) solve();
    return 0;
}