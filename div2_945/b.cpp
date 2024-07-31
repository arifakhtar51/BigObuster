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

bool areArraysEqual( vll &arr1,vll &arr2) {
    
    if (arr1.size() != arr2.size()) {
        return false;   
    }
    for (ll i = 0; i < arr1.size(); ++i) {
        if ((arr1[i] >=1 && arr2[i]<=0)|| (arr2[i] >=1 && arr1[i]<=0)) {
            return false;
        }
    }

    return true;
}

bool sol(vll &arr, ll mid,ll n){
    //   if (mid > 2*n) return false;  
    
    vll temp(63,0);
    for (ll i = 0; i < mid && i < n; i++) {
        ll xr = arr[i];
        for(int i=0;i<63;i++){
            if((xr>>i)&1==1){
                temp[i]++;
            }
        }
    }
    ll i=mid;
    ll j=0;
    vll temp2=temp;
    while(i<n){
        
        ll ele=arr[j++];
        for(int k=0;k<63;k++){
            if((ele>>k)&1==1){
                temp2[k]--;
            }
        }
        ll newEle=arr[i];
        for(int k=0;k<63;k++){
            if((newEle>>k)&1==1){
                temp2[k]++;
            }
        }
        bool ans=areArraysEqual(temp,temp2);
        if(ans==0)return 0;
        i++;

    }
    return true;
}
void solve(){
    
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<1;cl;return ;
    }
    ll s=1,e=n;
    ll mid=s+(e-s)/2;
    ll ans=n;

    while(s<=e){
        bool temp=sol(arr,mid,n);
        if(temp==1){
            ans=min(ans,mid);
            e=mid-1;
        }
        else
            s=mid+1;
        mid=s+(e-s)/2;
    }
    cout<<ans;cl;

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