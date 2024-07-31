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
    unordered_map<int,bool>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]=1;
    }
    if(mp.size()==1){
        cout<<"No";cl 
        return ;
    }
    cout<<"Yes"<<endl;
    sort(rbegin(arr),rend(arr));
    if(arr[1]==arr[0]){
        swap(arr[1],arr[n-1]);
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