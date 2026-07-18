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
    vll v1(n),v2(n);
    for(auto &a:v1) cin>>a;
    for(auto &a:v2) cin>>a;
    
    ll z=0,o=0;
    int nd = 0;
    for(int i=0;i<n;i++){
        if(v1[i]!=v2[i]){
            if(v1[i]==0) z++;
            else o++;
        }else if(v1[i]){
            nd++;
        }
    }
    
   if(z==0 && o==0){
        cout<<0<<endl;
        return;
    }
    if(o + nd == 0){
        cout<<-1<<endl;
        return;
    }else if(n==z + nd ){
        cout<<-1<<endl;
        return;
    }else if(o%2==1){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
}
 
int main() {
    int t = 1;
    cin >> t;   
    while (t--) solve();
    return 0;
}