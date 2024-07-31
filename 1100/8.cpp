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
    
    ll n,k,a,b;
    cin>>n>>k>>a>>b;
    vpll arr(n);
    for(ll i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        arr[i]={x,y};
    }
    a--,b--;//for 0 based indec
    ll temp=abs(arr[a].first-arr[b].first)+abs(arr[a].second-arr[b].second);
    if(k==0){
        cout<<abs(arr[a].first-arr[b].first)+abs(arr[a].second-arr[b].second);
        cl;return ;
    }
    
    ll mini=1e18;
    for(ll i=0;i<k;i++){
        ll t=abs(arr[a].first-arr[i].first)+abs(arr[a].second-arr[i].second);
        mini=min(mini,t);
    }
    ll mini2=1e18;
    for(ll i=0;i<k;i++){
        ll t=abs(arr[b].first-arr[i].first)+abs(arr[b].second-arr[i].second);
        mini2=min(mini2,t);
    }
    // cy;

    cout<<min(mini+mini2,temp);cl;
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