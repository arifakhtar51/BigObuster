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
     int n,q;
    cin>>n>>q;
    ll sm=0;
    vector<int>arr(n),pref(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sm+=arr[i];
        if(i!=0)
        pref[i]=arr[i]+pref[i-1];
        else pref[i]=arr[i];
        
    }
    ll Sum=sm;
    while(q--){
        int l,r,k;
        cin>>l>>r>>k;
        ll t=(r-l+1)*k;
        sm=Sum;
        if(l-2<0){
            sm-=(pref[r-1]);
        }else
        sm-=(pref[l-2]-pref[r-1]);

        sm+=(r-l+1)*k;
        if(sm&1){
                cy;
        }
        else{
                cn;
        }
    
    }
    ll temp=sm;

    

}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}