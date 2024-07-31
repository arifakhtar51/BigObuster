#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
void solve(){
     int n,a,b;
    cin>>n>>a>>b;
    if(n==1||(n==a && a==b)){
        cout<<"Yes";
    }
    else if(a+b>=n-1){
        cout<<"No";
    }
    else{cout<<"Yes";}
    cl
    
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}