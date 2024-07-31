#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define vll vector<ll>
#define sort(x) sort(begin(x),end(x))
#define vi vector<int>
#define rev(x) reverse(begin(x),end(x))
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=1;
    while(i<n-1){
        int oprn=arr[i-1];
        arr[i-1]=0;
        arr[i]-=2*oprn;
        if(arr[i]<0){
            cn;
            return ;
        }
        arr[i+1]-=oprn;
        i++;
    }
    for(auto i:arr){
        if(i!=0){
            cn;
            return ;
        }
    }
    cy;
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}