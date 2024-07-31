#include<bits/stdc++.h>
#include<iostream>
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

bool static  mycomp(pair<ll,ll>p1,pair<ll,ll>p2){
    if(p1.first==p2.first){
        return p1.second>p2.second;
    }
    else {
        return p1.first<p2.first;
    }
}
vector<bool>Prime(1e6,1);
void FindPrime(){
    Prime[0]=0;
    Prime[1]=0;
    for(int i=2;i*i<=1e6;i++){
        int j=i*i;
        while(j<=1e9){
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
    ll n;
    cin>>n;
    
    if(n&1){
        
        for(ll i=3;i<=sqrt(n);i++){
            // cout<<"yha->"<<i;cl;
            if(n%i==0){
                cout<<n/i<<" "<<n-n/i;cl;return ;
            }
        }
        cout<<1<<" "<<n-1;cl;

        
    }
    else {
        cout<<n/2<<" "<<n/2;cl;
    }
}
int main(){
    int t;
    // cout<<string(3,'1');
    cin>>t;
    ll cnt=0;
    // cout<<sizeof(void);
    while(t--){
        // cout<<"test->"<<++cnt;cl;
        solve();
    }
}