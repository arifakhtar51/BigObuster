#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define cyr cout<<"YES"<<endl; return ;
#define cnr cout<<"NO"<<endl; return ;
#define vll vector<ll>
#define srt(x) sort(begin(x),end(x))
#define vi vector<int>
#define rev(x) reverse(begin(x),end(x))
#define printarr(arr) for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
#define sortr(x) sort(rbegin(x),rend(x))
#define vpll vector<pair<ll,ll>>

bool static  mycomp(pair<ll,ll>p1,pair<ll,ll>p2){
    if(p1.first==p2.first){
        return p1.second>p2.second;
    }
    else {
        return p1.first<p2.first;
    }
}
void FindPrime(){
    vector<bool>Prime(3001,1);
    Prime[0]=0;
    Prime[1]=0;
    for(int i=2;i*i<=3000;i++){
        int j=i*i;
        while(j<=3000){
            Prime[j]=0;
            j+=i;
        }
    }
}
int sumOfDigit(int n){
    int sm=0;
    while(n){
        sm+=n%10;
        n/=10;
    }
    return sm;
}
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}

/* ===============BoilerPlate code end=========== */
/*====================You can Do it man!!====================*/
/*=================Think a bit more=============*/
// author -arifakhtar


void solve(){
    string a,b;
    cin>>a>>b;
    if(a.size()<b.size()){
        swap(a,b);
    }
    // cout<<"a="<<a;cl;
    // cout<<"b="<<b;cl;
    unordered_map<string,ll>mp;
    ll sze=b.size();
    for(int i=0;i<a.size();i++){
        for(int j=0;j<=a.size()-i;j++){
            string temp=a.substr(i,j);
            // cout<<temp;cl;
            // if(temp.size()>sze)break;
            mp[temp]=temp.size();

        }
    }
    // for(auto i:mp){
    //     cout<<i.first<<" ";
    // }
    ll maxi=0;
    for(int i=0;i<b.size();i++){
        for(int j=0;j<=b.size()-i;j++){
            string temp=b.substr(i,j);
            // cout<<temp<<" ";cl;
            if(mp[temp]){
                maxi=max(maxi,mp[temp]);
            }
        }
    }
    // cout<<"maxi="<<maxi;cl;
    cout<<a.size()+b.size()-2*maxi;cl;
}
int main(){

    int t;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        solve();
    }
}