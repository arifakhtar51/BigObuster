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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mn=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=(i+1))
         mn=__gcd(mn,abs(arr[i]-(i+1)));

    }
    if(mn==INT_MAX){
        cout<<0<<endl;
        return ;
    }
    cout<<mn;cl
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}