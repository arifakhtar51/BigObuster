#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
void solve(){
     ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>d){cout<<-1;cl return ;}
    
    ll diff=d-b;
    a+=diff;
    b+=diff;
    if(a<c){
        cout<<-1;cl return ;
    }
    else{
        cout<<diff+a-c<<endl;
    }

    
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}