#include<bits/stdc++.h>
#define ll long long
using namespace std;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
void solve(){
    int n;
    cin>>n;
    if(n%3==0){
        cout<<"Second";
    }
    else {
        cout<<"First";

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