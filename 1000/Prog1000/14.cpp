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
void print(vll & arr){
    // for(auto &i:arr)cout<<i<<" ";
    for(int i=arr.size()-1;i>=0;i--){
        cout<<arr[i]<<" ";
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



void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    map<ll,ll>m,sze;
// it runs usig uordered_ map<int,int>mp
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        sze[arr[i]]++;
        m[arr[i]]++;
    }
    for(auto &i:m){
        if(i.second==1){
            cout<<-1;cl;return ;
        }
    }
    m.clear();
    unordered_map<ll,vll>mp;
    for(ll i=0;i<n;i++){
        mp[arr[i]].push_back(i+1);
    }
    for(int j=0;j<n;){
        ll e=arr[j];
        j=upper_bound(begin(arr),end(arr),e)-begin(arr);
        vll i=mp[e];
        ll newn=sze[e];
            if(newn%2!=0){
                
                swap(i[newn/2],i[newn-1]);
            }
            for(int k=newn-1;k>=0;k--){
                cout<<i[k]<<" ";
            }
        
        }
    
    cl;

}
int main(){

    int t;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        solve();
    }
}