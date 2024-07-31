#include<bits/stdc++.h>
#define ll long long
using namespace std;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
void solve(){
     int n,k;
    cin>>n>>k;
    if(n%k!=0){
        cout<<1<<" "<<endl;
        cout<<n<<endl;
    }
    else {
        cout<<2<<endl;
        cout<<n -1<<" "<<1<<endl;
    }
   
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}