#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}

int main(){
    int t;
    int ext;
    cin>>t;
    while(t--){
         int n,x;
            cin>>n>>x;
            vector<int>arr(n);
            for(int i=0;i<n;i++)cin>>arr[i];
            int ans=arr[0];
            ans=max(ans,(x-arr[n-1])*2);
            int mn=INT_MIN;
            int rem=0;
            for(int i=1;i<n;i++){
                
                mn=max(mn,arr[i]-arr[i-1]+rem);
               
            }
            
            cout<<max(mn,ans)<<endl;
    }
    return 0;
    
}