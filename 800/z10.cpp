#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
#define cy cout<<"Yes"<<endl;
#define cn cout<<"No"<<endl;
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
    // sort(begin(arr),end(arr));
    int mn1=arr[0],mn2=INT_MAX;
    mn1=mn2;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            mn1=min(mn1,__gcd(arr[i],arr[j]));
        }
    }
    int ans=0;
    for(int i=0;i<n-1;i++){
         ans=__gcd(arr[i],arr[i+1]);
         arr[i+1]=ans;
        
    }

    
    if(ans>n)cn
    else{
        
        if(mn1<=2){
            cy;
        }
        else cn;
    }
     
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}