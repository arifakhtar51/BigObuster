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
    sort(begin(arr),end(arr));
    vector<int>temp1,temp2;
    int i=0,j=n-1;
    while(i<j){
        temp1.push_back(arr[i]);
        temp2.push_back(arr[j]);
        i++,j--;
    }
    ll ans=0;
    ans=abs(temp1[0]-temp2[0])+abs(temp2[0]-temp1[1])
    +abs(temp1[1]-temp2[1])+abs(temp2[1]-temp1[0]);
    cout<<ans<<" "<<endl;
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}