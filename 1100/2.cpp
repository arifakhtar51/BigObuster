#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define cyr cout<<"YES"<<endl; return ;
#define cnr cout<<"NO"<<endl; return ;
#define vll vector<ll>
#define srt(x) sort(begin(x),end(x))
#define vi vector<int>
#define rev(x) reverse(begin(x),end(x))
#define printarr(arr) for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
#define sortr(x) sort(rbegin(x),rend(x))
#define vpll vector<pair<ll,ll>>
#define um unordered_map<ll,ll>


bool static  mycomp(pair<ll,ll>p1,pair<ll,ll>p2){
    if(p1.first==p2.first){
        return p1.second>p2.second;
    }
    else {
        return p1.first<p2.first;
    }
}
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


void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>arr(n),brr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    for(ll i=0;i<n;i++){
        cin>>brr[i];
    }
    vector<ll>psum(n,0);
    vector<ll>maxi(n,0);
    psum[0]=arr[0];
    for(int i=1;i<n;i++)psum[i]=psum[i-1]+arr[i];
    maxi[0]=brr[0];
    for(int j=1;j<n;j++){
        maxi[j]=max(maxi[j-1],brr[j]);

    }
    ll ans=0;
    // cl;
    // printarr(maxi)
    // cl;
    // printarr(psum)
    // cl;
    // cl;
    // k--;
    for(int i=0;i<n;i++){
        if(k-i-1<0)break;
        ans=max(ans,psum[i]+(k-i-1)*maxi[i]);
    }
    cout<<ans;cl;
    
}
int main(){

    int t;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        solve();
    }
}