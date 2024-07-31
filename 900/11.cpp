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
    if(arr[0]==1)arr[0]+=1;
    for(int i=1;i<n;i++){
        if(arr[i]==1){arr[i]+=1;}
        if(arr[i]%arr[i-1]==0){
            arr[i]+=1;
        }
    }

    for(auto i:arr){
        cout<<i<<" ";
    }
    cl;
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}