#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
 
void solve() {
   ll n,k,b,s;
   cin>>n>>k>>b>>s;
   if(k==1){
    if(b!=s){
        cout<<-1<<endl;
    }else{
        for(int i=0;i<n;i++)
        cout<<s<<" ";
 
    cout<<endl;
    }
    //okay
    return;
   }
   if(s==0 and b==0){
    for(int i=0;i<n;i++){
        cout<<0<<" ";
    }
    cout<<endl;
    return;
   }
   if(s/k<b){
    cout<<-1<<endl;
    return;
   }
   if(s>((k-1)*(n)+k*b)){
    cout<<-1<<endl;
    return;
   }
   ll sum = s;
   sum-=k*b;
   
   ll lst = k*b;
   for(int i=1;i<n;i++){
    if(sum==0){
        cout<<0<<" ";
    }else{
        if(sum<(k-1)){
        cout<<sum<<" "; 
        sum = 0;
        }
        else{
        cout<<k-1<<" ";
        sum-=k-1;
        }
    }
   }
 
   lst+=sum;
   cout<<lst;
   cout<<endl;
}
int main() {
    int t = 1;
    cin >> t;   
    while (t--) solve();
    return 0;
}