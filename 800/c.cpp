#include<bits/stdc++.h>
#define ll long long
using namespace std;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
void solve(){
    int n;
    string str;
    cin>>n>>str;
    int ans=0;
    int cnt=0;
    int hastag=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        if(str[i]=='.'){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{
            hastag++;
            cnt=0;
        }
    }
    if(maxi>=3){
        cout<<"2"<<endl;
        return ;
    }
    cout<<n-hastag<<endl;
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}