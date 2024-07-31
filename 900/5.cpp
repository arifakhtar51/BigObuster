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
    ll sm=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sm^=arr[i];
    }
    // cout<<"XOR->"<<sm;cl
    if(sm==0){
        cout<<1<<endl;
        cout<<1<<" "<<n;cl
    }
    else if(n%2==0){
        cout<<2<<endl;
        cout<<1<<" "<<n;cl;
        cout<<1<<" "<<n;cl;
        return ;
    }
    else{
        cout<<4<<endl;
        cout<<2<<" "<<n;cl;
        cout<<2<<" "<<n;cl;
        cout<<1<<" "<<2;cl;
        cout<<1<<" "<<2;cl;
        return ;
    }
    
    
    
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}