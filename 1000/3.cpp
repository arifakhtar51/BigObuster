#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define cyr cout<<"YES"<<endl; return ;
#define cnr cout<<"NO"<<endl; return ;
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define srt(x) sort(begin(x),end(x))
#define vi vector<int>
#define rev(x) reverse(begin(x),end(x))
#define printarr(arr) for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
#define sortr(x) sort(rbegin(x),rend(x))
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

bool static  mycomp(pair<ll,ll>p1,pair<ll,ll>p2){
    if(p1.first==p2.first){
        return p1.second>p2.second;
    }
    else {
        return p1.first<p2.first;
    }
}
void solve(){
    ll n,p;
    cin>>n>>p;
    vector<ll>arr(n),brr(n);
    vpll vp;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    for(ll i=0;i<n;i++){
        cin>>brr[i];
    }
    for(int i=0;i<n;i++){
        vp.push_back({min(brr[i],p),arr[i]});
    }
    if(n==1){
        cout<<p<<endl;return ;
    }
    
    // cost , bande
    // for(auto i:vp){
    //     cout<<i.first<<" "<<i.second;cl;
    // }
    // This is correct
    sort(begin(vp),end(vp),mycomp);
    ll ans=p;
    ll rem=n-1;
    for(int i=0;i<n-1;i++){
        ans+=min(vp[i].second,rem)*vp[i].first;
        rem-=min(rem,vp[i].second);
        if(rem<=0)break;
    }

    
    cout<< ans;cl;

}
int main(){

    int t;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        solve();
    }
}