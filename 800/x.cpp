#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
ll lcm(ll a,ll b){
    return a*b/__gcd(a,b);
}
void solve(){
     ll n,k;
    cin>>n>>k;
    if(n&1 && !(k&1)){
        cout<<"No"<<endl;
    }
    else cout<<"Yes"<<endl;
    
}
int main(){

    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}