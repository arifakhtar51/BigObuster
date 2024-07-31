#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define cyr cout<<"YES"<<endl; return ;
#define cnr cout<<"NO"<<endl; return ;
#define vll vector<ll>
#define sort(x) sort(begin(x),end(x))
#define vi vector<int>
#define rev(x) reverse(begin(x),end(x))
#define printarr(arr) for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
#define sortr(x) sort(rbegin(x),rend(x))
#define mod 1e9+7
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
void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    
    ll maxi=1;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        // mp[arr[i]]++;maxi=max(maxi,mp[arr[i]]);
    }
    // cy;
    sort(arr);
    ll c=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            c++;
            maxi=max(maxi,c);
        }
        else {
            c=1;
        }
    }
    if(n==1){
        cout<<0;cl;return ;
    }
    if(n==2){
        if(arr[0]==arr[1])cout<<0<<endl;
        else cout<<2<<endl;
        return ;
    }
    ll rem=n-maxi;
    if(rem==0){
        cout<<0;cl;return ;
    }
    ll ans=rem;
    ll freq=maxi;
    ll cnt=0;
    while(rem>0){
        rem-=freq;
        cnt++;
        freq*=2;
    }
    // for(int i=0;i<=50;i++){
        // applied GP
    //     ll sm=maxi*(pow(2,i)-1);
    //     if(sm>=rem){
    //         cnt=i;
    //         break;
    //     }
    // }
    // Applied BS didn't work
    // int s=0,e=55;
    // ll mid=(s+e)/2;
    // while(s<=e){
    //     ll sm=maxi*(pow(2,mid)-1);
    //     if(sm>=rem){
    //         cnt=mid;
    //         e=mid-1;
    //     }
    //     else {
    //         s=mid+1;
    //     }
    //     mid=(s+e)/2;
    // }
    // cnt=ceil(log((float)(rem/maxi)+1.0)/log(2));
    cout<<cnt+ans;cl;

}
int main(){

    int t;
    // cout<<string(3,'1');
    cin>>t;
    ll cnt=1;
    while(t--){
        // cout<<cnt++<<" test case";
        solve();
    }
}