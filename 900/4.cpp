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
     ll n,a,b;
    cin>>a>>b>>n;
    vector<ll>arr(n);
    ll sm=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll newb=b-1;
    ll cnt=0;
    for(int i=0;i<n;i++){
        newb=newb+min(1+arr[i],a)-1;

        if(newb==0)break;
    }
    cout<<newb+1<<endl;

}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}