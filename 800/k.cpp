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
    int mn=INT_MAX,mn2=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>=0 && arr[i]<mn){
            mn=arr[i];
        }
        if(arr[i]<0 && arr[i]>mn2){
            mn2=arr[i];
        }
    }
    if(n==1){
        cout<<abs(arr[0])<<endl;
        return;
    }
    int ans=min(abs(0-mn),abs(0-mn2));
   if(mn2==INT_MIN){
    cout<<abs(mn)<<" ";
   }
   else if(mn==INT_MAX){
    cout<<abs(mn2)<<" ";
   }
   else 
    cout<<ans<<endl;

}
int main(){

  
    
        solve();
    
}