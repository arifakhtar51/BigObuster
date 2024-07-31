#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define cyr cout<<"YES"<<endl; return ;
#define cnr cout<<"NO"<<endl; return ;
#define vll vector<ll>
#define sort(x) srt(begin(x),end(x))
#define vi vector<int>
#define rev(x) reverse(begin(x),end(x))
#define printarr(arr) for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
#define sortr(x) sort(rbegin(x),rend(x))
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
    vector<vector<char>>arr(2*n,vector<char>(2*n,'#'));
    int cnt=0;
    int start=0;
    for(int i=0;i<2*n;i+=2){
        if(cnt%2==0){
            start=2;
        }
        else {
            start =0;
        }
        cnt++;
        for(int j=start;j<2*n;j+=2){
            arr[i][j]='.';
            arr[i+1][j]='.';
            arr[i+1][j+1]='.';
            arr[i][j+1]='.';
            j+=2;
        }
        
    }
    for(int i=0;i<2*n;i++){
        for(int j=0;j<2*n;j++){
            cout<<arr[i][j];
        }
        cl;
    }

    
}
int main(){

    int t;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        solve();
    }
}