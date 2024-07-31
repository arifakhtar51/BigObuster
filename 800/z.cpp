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
    int ans=-1;
    for(int i=0;i<pow(2,8);i++){
        vector<int>temp;
        for(auto j:arr){
            temp.push_back(j^i);
        }
        
        
        int t=temp[0];
        for(int j=1;j<n;j++){
            t^=temp[j];
        }
        if(t==0){
            
            cout<<i<<endl;
            return ;
        }
    }
    cout<<-1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}