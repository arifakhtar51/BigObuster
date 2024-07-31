#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
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
    for(int i=0;i<n-1;i++){
        if((arr[i]%2==1 && arr[i+1]%2==1)|| ((arr[i]%2==0 && arr[i+1]%2==0))){
            // cout<<arr[i]<<" "<<arr[i+1]<<endl;
            cnt++;
        }
    }
    cout<<cnt<<" "<<endl;
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}