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
    int a,b,xk,yk,xq,yq;
    cin>>a>>b>>xk>>yk>>xq>>yq;
    int arr[4]={-a,a,-a,a};
    int brr[4]={b,-b,-b,b};
    ll cnt=0;
    map<pair<int,int>,int>mp,mp2,mp3;
    for(int i=0;i<4;i++){
        int newXk=xk+arr[i];
        int newYk=yk+brr[i];
        int c=xk+brr[i];
        int d=yk+arr[i];
        int newXq=xq+arr[i];
        int newYq=yq+brr[i];
        int l=xq+brr[i];
        int m=yq+arr[i];
        // cout<<newXk<<" to "<<newYk<<endl;

        mp[{newXk,newYk}]=1;
        
        mp[{c,d}]=1;

        mp2[{newXq,newYq}]=1;
        // if(mp2.count({l,m})<=0)
        mp2[{l,m}]=1;

        
    }
    for(auto i:mp){
        if(i.second>=2){
            // cout<<i.first.first<<" to "<<i.first.second<<endl;
            cnt++;
        }
    }
    
    for(auto i:mp){
        mp3[i.first]++;
    }
    for(auto i:mp2){
        mp3[i.first]++;
    }
    for(auto i:mp3){
        if(i.second>=2)cnt++;
    }
    cout<<cnt<<endl;

    // for(int i=0;i<4;i++){
    //     int newXk=xk+arr[i];
    //     int newYk=yk+brr[i];
    //     cout<<newXk<<" to "<<newYk<<endl;
    //     for(int j=0;j<4;j++){
    //         int newXq=xq+arr[j];
    //         int newYq=yq+brr[j];
    //         cout<<"Queen :"<<newXq<<" to "<<newYq<<endl;
    //         if(newXq==newXk &&newYq==newYk){
    //             cnt++;
    //         }

    //     }
    //     break;
        
        
    // }

    // cout<<"dusre directn me";cl
    // int cnt2=0;
    // for(int i=0;i<4;i++){
    //     int newXk=xk+brr[i];
    //     int newYk=yk+arr[i];
    //     cout<<newXk<<" to "<<newYk<<endl;
    //     for(int j=0;j<4;j++){
    //         int newXq=xq+brr[j];
    //         int newYq=yq+arr[j];
    //         cout<<"Queen :"<<newXq<<" to "<<newYq<<endl;
    //         if(newXq==newXk &&newYq==newYk){
    //             cnt2++;
    //         }

    //     }
    //     break;
        
        
    // }
    
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}