#include<bits/stdc++.h>
#define ll long long
using namespace std;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
int findSm(int i,vector<string>&target,int sm){
    int Sum=0;
    for(int j=i;j<10-i;j++){
        for(int k=i;k<10-i;k++){
            if(j==i||j==9-i||k==i||k==9-i){
                if(target[j][k]=='X'){
                    Sum+=sm;
                }
                // cout<<"*";
            }
            // else cout<<" ";
        }
        // cout<<endl;
    }
    // cout<<Sum<<"<-Yhaa"<<endl;
    return Sum;
}
void solve(){
    vector<string>target;
    for(int i=0;i<10;i++){
        string temp;
        cin>>temp;
        target.push_back(temp);
    }

    ll sm=0;
    int cnt=0;
    for(int i=0;i<5;i++){
        cnt++;
        sm+=findSm(i,target,cnt);
    }
    cout<<sm<<endl;

}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}