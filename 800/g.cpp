#include<bits/stdc++.h>
#define ll long long
using namespace std;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
void solve(){
    int n,m;
    string x,s,temp="";
    cin>>n>>m>>x>>s;
    temp=x;
    int cnt=0;  
    bool flag=1;
    while(true){
        if(x.size()>=m && x.find(s)!=string::npos){
            flag=0;
            break;
        }
        else {
            if(temp.size()>m+n)break;
            x+=temp;
            
            temp=x;
        }
        cnt++;

    }
    if(flag==1)cout<<-1<<endl;
    else
    cout<<cnt<<endl;
    
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}