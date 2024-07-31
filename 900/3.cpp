#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
#define cy cout<<"Yes"<<endl
#define cn cout<<"No"<<endl
#define vll vector<ll>
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
void solve(){
     ll n,k,x;
     cin>>n>>k>>x;
     ll sm1toN=k*(k+1)/2;
     ll maxi=((k)*(2*(n-k+1)+(k-1)))/2;

    // cout<<"maxi->"<<maxi<<endl;
     if(x>maxi)cn;
     else if(x<=maxi && x>=sm1toN)cy;
     else cn;


}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}