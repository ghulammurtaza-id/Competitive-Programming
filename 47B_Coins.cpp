#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
 
void solve() {
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1[1]=='>')
    swap(s1[0],s1[2]);    
 
 
    if(s2[1]=='>')
    swap(s2[0],s2[2]); 
 
 
    if(s3[1]=='>')
    swap(s3[0],s3[2]);
    
    int a,b,c;
    a = b = c = 0;
    vector<string> vs = {s1,s2,s3};
    for(auto af:vs)
    if(af[0]=='A') a--;
    else if(af[0]=='B')b--;
    else if(af[0]=='C') c--;
    
    for(auto af:vs)
    if(af[2]=='A') a++;
    else if(af[2]=='B')b++;
    else if(af[2]=='C') c++;
    if(a==b or b==c or a==c) cout<<"Impossible"<<endl;
    else{
        if(a<b and a<c){
            cout<<"A";
            if(b<c){
                cout<<"BC";
            }else{
                cout<<"CB"<<endl;
            }
        }else if(b<a and b<c){
            cout<<"B";
            if(a<c){
                cout<<"AC";
            }else{
                cout<<"CA"<<endl;
            }
        }else{
            cout<<"C";
            if(b<a){
                cout<<"BA";
            }else{
                cout<<"AB"<<endl;
            }
        }
    }
    
 
}
int main() {
    int t = 1;
    //cin >> t;   
    while (t--) solve();
    return 0;
}