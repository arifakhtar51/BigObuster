#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define cyr cout<<"YES"<<endl; return ;
#define cnr cout<<"NO"<<endl; return ;
#define pll pair<ll,ll>
#define vll vector<ll>
#define srt(x) sort(begin(x),end(x))
#define vi vector<int>
#define rev(x) reverse(begin(x),end(x))
#define printarr(arr) for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
#define sortr(x) sort(rbegin(x),rend(x))
#define PI 3.143
void FindPrime(){
    vector<bool>Prime(3001,1);
    Prime[0]=0;
    Prime[1]=0;
    for(int i=2;i*i<=3000;i++){
        int j=i*i;
        while(j<=3000){
            Prime[j]=0;
            j+=i;
        }
    }
}
int sumOfDigit(int n){
    int sm=0;
    while(n){
        sm+=n%10;
        n/=10;
    }
    return sm;
}
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}

/* ===============BoilerPlate code end=========== */
/*====================You can Do it man!!====================*/
/*=================Think a bit more=============*/
// author -arifakhtar


vector<pll>vp;
void f(){
    ll n;
    cin>>n;
    vll arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    srt(arr);
    vp.push_back({arr[1],arr[0]});
    
}
void solve(){
    ll n;
    cin>>n;
    vp.clear();
    ll x=n;
    while(x--){
        f();
    }
    sort(begin(vp),end(vp),[&](const pll &a,pll &b){
        return a.first>b.first;
    });
    ll mn=INT_MAX;
    ll ans=0;
    for(ll i=0;i<vp.size()-1;i++){

        ans+=vp[i].first;
        mn=min(mn,vp[i].second);
    }
    mn=min(mn,vp[vp.size()-1].second);
    
    cout<<ans+mn<< " ";
    cl;
    
    
}
int main(){

    int t;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        solve();
    }
}