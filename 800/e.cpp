#include<bits/stdc++.h>
#define ll long long
using namespace std;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
bool sorted(vector<int>&arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        if(arr[i-1]<=arr[i]){

        }
        else{
            return 0;
        }
    }
    return 1;
}
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool isSorted=sorted(arr);
    
    if(isSorted){
        cout<<"YES"<<endl;
        return ;
    }
    for(int j=0;j<n;j++){
         for(int i=1;i<n-1;i++){
            if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }
   
    bool ans=sorted(arr);
     if(ans){
        cout<<"YES"<<endl;
        return ;
    }
    else{
        // for(auto i:arr)cout<<i<<" ";
        cout<<"NO"<<endl;
    }


}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}