#include<bits/stdc++.h>
#define ll long long
using namespace std;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
ll powBy(ll n){
    ll ans=1;
    for(ll i=1;i<=n;i++){
        ans*=2;
    }
    return ans;
}
void solve(){
     ll n;
    cin>>n;
    if(!(n&(n-1))){
        // pow of 2 
        cout<<n<<endl;
    }
    else {
        ll num=log2(n);
        cout<<powBy(num)<<endl;

        
    }
    
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}