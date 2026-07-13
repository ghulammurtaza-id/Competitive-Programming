    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define vll vector<ll>
    #define vi vector<int>
    #define all(x) x.begin(), x.end()
    #define rall(x) x.rbegin(), x.rend()
    /*
    store in char matrix
    find the pos of S
    map<char,min distance of each char> make krna
    then ans the each query and decide the increment up or not
 
    */
    void solve() {
        ll n,m,x;
        cin>>n>>m>>x;
        char arr[n+1][m+1];
        vector<pair<int,int>> vp;
        bool flag = false;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j+=1){
                cin>>arr[i][j];
                if(arr[i][j]=='S'){
                vp.push_back({i,j});
                flag = true;}
            }
        }
 
        map<char,float> ms;
        int cnt = 0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j+=1){
                if(arr[i][j]=='S') continue;
                char c = arr[i][j];
                if(ms.find(c)==ms.end()) ms[c] = 1111111.4;
                
                for(auto [xi,yi]:vp){
                    float ds = sqrt(pow(abs(xi-i),2)+pow(abs(yi-j),2));
                    if(ds<=(float)x){
                        ms[c] = min(ms[c],ds); 
                    }
                }
 
            }
        }
        int q;
        cin>>q;
        for(int i=0;i<q;i++){
            char c;
            cin>>c;
            char t = c;
            t = tolower(t);
            // -1 if the element doesn't exist
            // how can we check this shit.. bro
            if(!flag and isupper(c)){
                cout<<-1<<endl;
                return;
            }
            if(ms.find(t)==ms.end()){
                cout<<-1<<endl;
                return;
            }
            // when we have to cnt++
            if(isupper(c) and (ms[t]>200)){
                cnt++;
                continue;
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