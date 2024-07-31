#include<bits/stdc++.h>
#define ll long long
using namespace std;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
void solve(){
    int n ;
    cin>>n;
    unordered_map<int,int>mp;

    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        mp[ele]++;
    }
    if(mp.size()==1 )cout<<"Yes"<<endl;
    else if(mp.size()==2){
        vector<int>temp;
        for(auto i:mp){
           temp.push_back(i.second);
        }
        int diff=abs(temp[0]-temp[1]);
        if(diff<=1)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}