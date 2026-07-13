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
    string s;
    cin>>s;
    deque<char> d;
    if(n&1){
        bool flag = true;
        for(auto a:s){
            if(flag)
            d.push_back(a),flag=false;
            else
            d.push_front(a),flag=true;
        }
    }else{
 
        bool flag = true;
        for(auto a:s){
            if(flag)
            d.push_front(a),flag=false;
            else
            d.push_back(a),flag=true;
        }
 
    } 
    for(auto ok:d)cout<<ok;
}
int main() {
    int t = 1;
    //cin >> t;   
    while (t--) solve();
    return 0;
}