#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
bool oneDigit(int n){
    if(n<=10)return 1;
    int cnt=0;
    while(n){
        int rem=n%10;
        n/=10;
        if(rem>=1)cnt++;
        if(cnt>=2)return 0;
    }
    return 1;
}
void solve(){
     int n;
    cin>>n;
    ll cnt=0;

    cnt+=(n/9)*9;
    // cout<<cnt<<endl;
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}