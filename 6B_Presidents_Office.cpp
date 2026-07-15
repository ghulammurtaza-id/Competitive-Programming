#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
 
void solve() {
   ll n,m;cin>>n>>m;
   char c;
   cin>>c;
   char mx[n][m];
   int dx[]={1,-1,0,0};
   int dy[]={0,0,1,-1};
   vector<pair<ll,ll>> vp;
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>mx[i][j];
        if(mx[i][j]==c){
            vp.push_back({i,j});
        }
    }
   }
   set<char> s;
   int cnt= 0;
   for(auto [x,y]:vp){
    for(int i=0;i<4;i++){
        int oi = dx[i]+x;
        int oj = dy[i]+y;
        if(oi>=0 and oj>=0 and oi<n and oj<m and mx[oi][oj]!=c and mx[oi][oj]!='.' and s.find(mx[oi][oj])==s.end()){
            cnt++;
            s.insert(mx[oi][oj]);
        }
    }
   }
   cout<<cnt<<endl;
}
int main() {
    int t = 1;
    //cin >> t;   
    while (t--) solve();
    return 0;
}