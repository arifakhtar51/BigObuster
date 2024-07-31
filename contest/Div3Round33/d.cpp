#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define vll vector<ll>
#define sort(x) sort(begin(x),end(x))
#define vi vector<int>
#define rev(x) reverse(begin(x),end(x))
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
void solve(){
    int n, m, x;
    cin >> n >> m >> x;

    vector<pair<int, char>> arr(m);
    for (int i = 0; i < m; ++i) {
        cin >> arr[i].first >> arr[i].second;
    }
    vector<int> positions(n + 1, 0);
    positions[x] = 1;

    for (int i = 0; i < m; ++i) {
        int r = arr[i].first;
        char c = arr[i].second;

        if (c == '0') {
            // clock wise
            vector<int>temp(n+1,0);

            
            for(int j=1;j<=n;j++){
                if(positions[j]==1){
                    int newr=(j+r)%n;
                if(newr==0)newr=n;
                    temp[newr] =1; 
                }
            }
            positions=temp;
            
            
        } else if (c == '1') {
            // anticlock wise
            vector<int>temp(n+1,0);
                
                for(int j=1;j<=n;j++){
                if(positions[j]==1){
                    int newr=(n-r+j)%n;
                    if(newr==0)newr=n;
                    temp[newr] =1;
                }
            }
            positions=temp;
                
        
            
        } else {
            vector<int>temp(n+1,0);
            for(int j=1;j<=n;j++){
                if(positions[j]==1){
                    int newr=(j+r)%n;
                if(newr==0)newr=n;
                    temp[newr] =1; 
                }
            }
            for(int j=1;j<=n;j++){
                if(positions[j]==1){
                    int newr=(n-r+j)%n;
                    if(newr==0)newr=n;
                    temp[newr] =1;
                }
            }
            positions=temp;
            // positions=temp;
            // int newr=(x+r)%n;
            // if(newr==0)newr=n;
            // positions[newr] =1; 
            // int Anewr=(n-r+x)%n;
            // if(Anewr==0)Anewr=n;
            // positions[Anewr] =1;
            
            
        }
    }
    // cout<<"ans->";cl;
    ll cnt=0;
    
    for(int i=1;i<=n;i++){
        if(positions[i]==1){
            cnt++;
        }
    }
    cout<<cnt<<" "<<endl;
    for(int i=1;i<=n;i++){
        if(positions[i]==1){
            cout<<i<<" ";
        }
    }
    cl;
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
