// sort(a)int ans = ((c+1)*(c+2))/2;
// for(int x:a) : ans -= (c-x+2+x/2)for(int x:a) : if(x is even ec++;ans+=ec else oc++,ans+=oc); 
// return ans

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
#define cy cout<<"Yes"<<endl;
#define cn cout<<"No"<<endl;
#define vll vector<ll>
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
void solve(){
     int n,c;
    cin>>n>>c;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(auto i:arr){
        
    }
    sort(begin(arr),end(arr));
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}