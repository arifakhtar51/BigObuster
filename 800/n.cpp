#include<bits/stdc++.h>
#define ll long long
using namespace std;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
void solve(){
    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    if(n==1){
        cout<<1<<endl;
        for(auto i:arr)cout<<i<<endl;
        return ;
    }
    vector<int>ans;
    ans.push_back(arr[0]);
    for(int i=1;i<n;i++){
        if(arr[i-1]<=arr[i]){
            ans.push_back(arr[i]);
        }
        else{
            ans.push_back(arr[i]);
             ans.push_back(arr[i]);
            
        }
    }
    // ans.push_back(arr[n-1]);
    cout<<ans.size()<<endl;
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}