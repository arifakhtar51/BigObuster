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

ll find(ll md,vll &arr){
    ll ans=0;
    for(ll i=0;i<arr.size();i++){
        if(arr[i]<=md){
            ans+=md-arr[i];
        }
    }
    return ans;
}
void solve(){
    ll n,x;
    cin>>n>>x;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll s=1,e=1e10+1;
    ll mid=s+(e-s)/2;
    ll ans=0;
    while(s<=e){
        ll temp=find(mid,arr);
        if(temp<=x){
            s=mid+1;
            ans=max(ans,s);
        }
        else {
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    cout<<ans-1<<" ";cl;
}
int main(){

    int t=1;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        solve();
    }
}