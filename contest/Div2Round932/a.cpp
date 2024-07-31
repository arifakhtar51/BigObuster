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
    string rev=str;
    reverse(rev.begin(),rev.end());
    string s1,s2,s3;
    s1=str;
    s2=rev+str;
    s3=str+rev;
    string small="";
    if(s1<s2 && s1<s2){
        small=s1;
    }
    else if(s2<s3 && s2<s3){
        small=s2;
    }
    else {
        small=s3;
    }
    cout<<small;cl;

}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}