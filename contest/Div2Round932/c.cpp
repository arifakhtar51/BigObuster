#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
#define cy cout<<"Yes"<<endl;
#define cn cout<<"No"<<endl;
#define vll vector<ll>
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
void solve(){
     int n,l;
    cin>>n>>l;
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        arr[i]={a,b};
    }
    // sort(begin(arr),end(arr));
    ll ans=0;
    for(int i=0;i<n;i++){
        ll ai,bi;
        ai=arr[i].first;
        bi=arr[i].second;
        ll sm=ai;
        
    }

}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}