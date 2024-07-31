#include<bits/stdc++.h>
#define ll long long
using namespace std;
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
    cout<<n<<endl;
    for(auto i:arr){
        cout<<i<<" ";
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