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
    string str;
    cin>>str;
    int i=0,j=n-1;
    int cnt=0;
    while(i<j){
        if((str[i]=='1'&&str[j]=='0')||(str[i]=='0'&&str[j]=='1')){
            
            i++,j--;
        }
        else break;
    }
    cout<<j-i+1;cl
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}