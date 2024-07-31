#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
int mod = 1e9+7;
ll recursion(int i,int n,vector<ll> &arr){
   if(i == 0) return n;
    ll ans1=1e18,temp2=1e18;
   if(arr[i] <= n){
      ll rem = n/arr[i];
      ll coin = n%arr[i];
      ans1 = rem+recursion(i-1,coin,arr);
      temp2 = rem-1+recursion(i-1,coin + arr[i],arr);
   }
   else{
      return recursion(i-1,n,arr);
   }
   ll minCoin=min(ans1,temp2);
    return minCoin;
  
}

 void  solve(){
    ll n;
    cin>>n;
    vector<ll>arr={1,3,6,10,15};
    cout<<recursion(4,n,arr)<<endl;
 }

 int main() {
 
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}