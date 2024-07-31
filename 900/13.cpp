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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int cnt=0;
    int i=0;
    while(i<n){
        if(arr[i]!=0){
            cnt++;
            while(i<n&&arr[i]!=0)i++;
        }
        else
        i++;
    }
    if(cnt==0){
        cout<<0<<endl;
    }
    else if(cnt==1){cout<<1<<endl;}
    else cout<<2<<endl;
    
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}