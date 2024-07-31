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
    int maxi=0;
    int i=0,j=0;
    int cnt=0;
    while(i<n&& j<n){
        if(arr[i]==arr[j]&& arr[i]==1){
            i=j;
            j++;
            cnt=0;
        }
        else if(arr[j]==0){
            j++;
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{
            cnt=0; i=j, j++;}

    }
    cout<<maxi;cl
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}