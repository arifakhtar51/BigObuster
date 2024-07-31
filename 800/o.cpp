#include<bits/stdc++.h>
#define ll long long
using namespace std;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    a+=ceil((float)c/2);
    b+=floor((float)c/2);
    // cout<<a<<" "<<b;
    if( b>=a){
        cout<<"Second"<<endl;
    }
    else{
        cout<<"First"<<endl;
    }
   

}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}