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
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            cout<<0<<" "<<endl;
            return ;
        }
    }
    int ans=0;
    int mn=INT_MAX;
    for(int i=1;i<n;i++){
        int ele1=arr[i-1];
        int ele2=arr[i];
        mn=min(mn,ele2-ele1);
        
    }
    cout<<mn/2 +1<<endl;
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}