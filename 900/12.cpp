#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
#define cy cout<<"Yes"<<endl;
#define cn cout<<"No"<<endl;
#define vll vector<ll>
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
void solve(){
     int n;
    cin>>n;
    vector<int>arr(n);
    int maxi=INT_MIN;
    int mini=INT_MAX;
    int maxiI=0,miniI=0;
    int ans=INT_MIN;
    int MAX=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>=maxi){
            maxi=arr[i];
            maxiI=i;
        }
        if(arr[i]<=mini){
            mini=arr[i];
            miniI=i;
        }
        if(i!=0){
            MAX=max(MAX,arr[i-1]-arr[i]);
        }
    }
    if(maxiI==n-1||miniI==0){
        cout<<maxi-mini;cl;
    }
    else {
        
        MAX=max(MAX,maxi-arr[0]);
        MAX=max(MAX,arr[n-1]-mini);
        MAX=max(MAX,arr[maxiI]-arr[maxiI+1]);
        cout<<MAX;cl;

    }

    // if(n==0){
    //     cout<<0<<endl;
    //     return ;
    // }
    // cout<<maxi-mini<<" ";cl
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}