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
// #################################################################################
void prefixsum(vll&arr,vll&psum){
    psum[0]=arr[0];int n=arr.size();
    for(int i=1;i<n;i++)psum[i]=psum[i-1]+arr[i];
    
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
ll power(ll a,ll b){
    if(!b)return 1;
    ll temp=power(a,b/2);
    temp*=temp;
    if(b&1)temp*=a;
    return temp;
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

    vector<ll>arr(n);
    ll tot=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        tot+=arr[i];
    }
    srt(arr);
    vll psm(n,0);
    prefixsum(arr,psm);
    // cl;
    // printarr(psm);
    ll maxi=0;
    // cout<<tot<<"  <-";cl;
    for(ll i=0;i<=k;i++){
        //take not take
        ll RemoveMini=2*i;
        ll RemoveMaxi=k-i;
        ll x=0;
        if(RemoveMini!=0)
         x=psm[RemoveMini-1];
        else x=0;
        ll tt=tot-psm[n-RemoveMaxi-1];
        ll temp=tot-(x+(tt));
        // cout<<"temp= "<<temp<<" tt= " <<tt;cl;
        maxi=max(maxi,temp);

    }
    cout<<maxi<<" ";cl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t=1;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        solve();

    }

}