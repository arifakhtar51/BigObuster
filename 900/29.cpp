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
#define mod 1e9+7
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
    vector<pair<ll,ll>>temp(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        temp[i]={arr[i],i};

    }
    sortr(temp);
    for(int i=0;i<n;i++){
        int ele=temp[i].first;
        int indx=temp[i].second;
        int x=-1,y=-1;
        int j=indx+1;
        while(j<n){
            if(arr[j]<ele){
                y=j;
                break;
            }
            j++;
        }
        j=indx-1;
        while(j>=0){
            if(arr[j]<ele){
                x=j;
                break;
            }
            j--;
        }
        if(x!=-1 && y!=-1){
            cy;
            cout<<x+1<<" "<<indx+1<<" "<<y+1;cl;
            return;
        }
    }
    cn;
}
int main(){

    int t;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        solve();
    }
}