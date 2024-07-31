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
     int n;
    cin>>n;
    string str;
    cin>>str;
    int maxi=2;
    int j=0;
    int cnt=2;
    for(int i=1;i<n;i++){
        if(str[i-1]==str[i]){
            cnt++;
            maxi=max(cnt,maxi);

        }
        else {
            cnt=2;
        }
    }
    
    cout<<maxi<<endl;
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}