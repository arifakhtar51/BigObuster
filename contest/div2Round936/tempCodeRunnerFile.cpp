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
    vector<vector<ll>>arr(n,vector<ll>(n,0));
    for(ll i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            
        }
    }

    
    ll i=0;
    ll ans=0;
    while(i<n){
        ll sm=0;
        ll j=i;
        ll k=0;
        while(j<n && k<n){
            sm+=arr[j][k]; 
            j++,k++;
        }
        ans=max(ans,sm);
        i++;
    }
    i=1;
    while(i<n){
        ll sm=0;
        ll j=i;
        ll k=0;
        while(j<n&&k<n){
            sm+=arr[k][j];
            j++,k++;
        }
        ans=max(ans,sm);
        i++;
    }
    cout<<ans;cl;
    
    
    
}
int main(){

    int t;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<__gcd(a,b);cl;
    }
}