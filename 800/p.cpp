#include<bits/stdc++.h>
#define ll long long
using namespace std;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
void solve(){
     int n;
    cin>>n;
    vector<int>arr(n);
    int sm=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sm+=arr[i];
    }
    float a=ceil((float)sm/2);
    int b=sm/2;
// cout<<a<<" fj  "<<b;

    if(float(b)==a)cout<<"Yes";
    else cout<<"No";
    cout<<endl;
    
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}