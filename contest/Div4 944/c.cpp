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

// Prefix sum

vll prefixSum(vll&arr,vll&psum){
    psum[0]=arr[0];int n=arr.size();
    for(int i=1;i<n;i++)psum[i]=psum[i-1]+arr[i];
    return psum;
}

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
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    unordered_map<ll,ll>mp;
    unordered_map<ll,ll>mpupar;
    if(a>b)swap(a,b);
    if(c>d)swap(c,d);
    for(ll i=a+1;i<(b);i++){
        mp[i]=1;
    }
    ll itrn=0;
    for(ll i=b+1;1;i++){
        itrn++;
        if(i==a)break;
        if(i>12){
            ll t=i%12;
            if(t==a)break;
            mpupar[t]=1;
        }
        else {
            mpupar[i]++;
        }
        if(itrn>=13)break;

    }
    // for(auto j:mpupar){
    //     cout<<j.first<<" ";
    // }
    // cl;
    // cout<<c<<" "<<d;cl;
    if((mp[c]>=1 && mpupar[d]>=1)||(mp[d]>=1 && mpupar[c]>=1)){
        cy;
    }
    else cn;

    

}
int main(){

    int t=1;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        solve();
    }
}