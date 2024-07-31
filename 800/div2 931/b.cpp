#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}


ll solve2(vector<ll>& coins, ll amount,unordered_map<ll,ll>&mp){
    if(amount==0){
        return 0;
    }
    if(amount <0)return LONG_LONG_MAX;
    if(mp[amount]){
         return mp[amount];
    }

    ll mn=INT_MAX;
    for(int i=0;i<coins.size();i++){
        
        ll ans=solve2(coins,amount-coins[i],mp);
        if(ans!=LONG_LONG_MAX){
            mn=min(mn,ans+1);
        }
    }
    mp[amount]=mn;
    return mn;
}

ll coinChange(vector<ll>& coins, ll amount) {
        
        unordered_map<ll,ll>mp;
        ll ans=solve2(coins,amount,mp);
        
        return ans;
    }
void solve(){
     ll n;
    cin>>n;
    unordered_map<ll,bool>mp;
    mp[1]=1;
    mp[3]=1;
    mp[6]=1;
    mp[10]=1;
    mp[15]=1;
    if(mp[n]){
        cout<<1<<endl;
        return ;
    }
    vector<ll>arr;
    arr.push_back(1);arr.push_back(3);arr.push_back(6);arr.push_back(10);arr.push_back(15);
    
    ll ans=coinChange(arr,n);
    // for(int i=4;i>=0;i--){
    //     if(n>=arr[i]){
    //         minCoin+=n/arr[i];
    //         n-=ceil((n/arr[i])*arr[i]);

    //     }
    // }
    cout<<ans<<endl;
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}