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
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>arr(n),arr2(m);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    for(ll i=0;i<m;i++){
        cin>>arr2[i];
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i]+arr2[j]<=k)ans++;
        }
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