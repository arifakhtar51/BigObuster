#include<bits/stdc++.h>
#define ll long long
using namespace std;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
int solve(){
    int n;
    cin>>n;
    int sm=0;
    
    vector<int>arr(n);
    for(int i=0;i<n-1;i++){
       cin>>arr[i];
       sm+=arr[i];
    }
    cout<<-sm<<endl;
   
    return 0;

}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}