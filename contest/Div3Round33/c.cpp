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
    ll n;
    cin>>n;
    string str;
    cin>>str;
    ll ans=0;
    if(n<3){
        cout<<0<<endl;
        return ;
    }
    for(int i=0;i<n-2;i++){
        string temp=str.substr(i,3);
        if(temp=="map"|| temp=="pie"){
            ans++;
        }
    }
    
    for(int i=0;i<n-4;i++){
        string temp=str.substr(i,5);
        
        if(temp=="mapie" ){
            ans--;
        }
        // cout<<temp<<" ";
    }
    cout<<ans<<endl;

}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}