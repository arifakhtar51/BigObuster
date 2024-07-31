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
ll findMaxi(vector<ll>&arr,ll ele){
    ll n=arr.size();
    ll cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=ele){
            cnt++;
        }
    }
    if(cnt==n){
        return 0;

    }   
    cnt=1; 
    
    ll maxi=1;
    for(ll i=0;i<n-1;i++){
        if(arr[i]==ele && arr[i]==arr[i+1]){
            cnt++;

            maxi=max(maxi,cnt);
        }
        else cnt=1;
    }
    return maxi;
}

void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n),brr(n);

    
    vector<ll>a(2*n),b(2*n);
    ll ele=1;
    ll cnt=0;
    for(ll i=0;i<n;i++){cin>>arr[i];
        if(ele==arr[i]){
            cnt++;
        }
        else {
            ele=arr[i];
            cnt=1;
        }
        a[ele-1]=max(a[ele-1],cnt);
    }
    ele=1;cnt=0;
    for(ll i=0;i<n;i++){cin>>brr[i];
    if(ele==brr[i]){
            cnt++;
        }
        else {
            ele=brr[i];
            cnt=1;
        }
        b[ele-1]=max(b[ele-1],cnt);
    }

    
    ll ans=1;
    ll maxi=1;
    int i=0;
    // cy;
    // printarr(a);
    // cl;
    // printarr(b);
    // cl;
    while(i<2*n){
        maxi=max(maxi,{a[i]+b[i]});
        i++;
    }
    cout<<maxi;cl;
    

}
int main(){

    int t;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        solve();
    }
}