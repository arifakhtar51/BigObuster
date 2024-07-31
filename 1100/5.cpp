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

void prefixSum(vll&arr,vll&psum){
    psum[0]=arr[0];int n=arr.size();
    for(int i=1;i<n;i++)psum[i]=psum[i-1]+arr[i];
    // return psum;
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
    ll n;
    cin>>n;
    vector<ll>arr(n);
    vll prime;
    ll maxi=0;
    ll mini=1e17;
    ll sm=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        sm+=arr[i];
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
    }
    if(n==2){
        cout<<abs(arr[0]-arr[1]);cl;return;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            prime.push_back(i);
        }
    }
    ll ans=maxi-mini;
    // srt(arr);
    if(prime.size()==0){
        cout<<ans;cl;return;
    }

    vll psm(n,0);
    prefixSum(arr,psm);
    // printarr(psm);cl;
    // printarr(prime);cl;
    for(int i=0;i<prime.size();i++){
        ll mn=1e17;
        ll mx=0;
        for(ll j=0;j<n;j+=prime[i]){
            ll sm1=0;
            for(ll k=j;k<j+prime[i] && k<n;k++){
                sm1+=arr[k];
            }
            mn=min(mn,sm1);
            mx=max(mx,sm1);
        }
        // cl;
        // cout<<mn<<" "<<mx<<" ";cl;
        ans=max(ans,abs(mx-mn));
        
    }
    cout<<ans;cl;
}
int main(){

    int t=1;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        solve();
    }
}