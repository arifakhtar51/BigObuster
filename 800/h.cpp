#include<bits/stdc++.h>
#define ll long long
using namespace std;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(auto i:arr)
    {if(i==k){
        cout<<"Yes"<<endl;
        return ;
    }}

     {
        cout<<"NO"<<endl;
    }

}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}