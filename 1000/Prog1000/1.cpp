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
    string str;
    cin>>str;
    int cnt0=0,cnt1=0;
    for(char ch:str){
        if(ch=='1')cnt1++;
        else cnt0++;
    }
    if(cnt1==cnt0){cout<<0;cl;return ;}
    ll cnt=0;
    for(ll i=0;i<str.size();i++){
        if(str[i]=='1'){
            if(cnt0>=1){
                cnt++;
                cnt0--;
            }
            else break;
        }
        else {
            if(cnt1>=1){
                cnt++;
                cnt1--;
            }
            else break;
        }
    }
    cout<<str.size()-cnt<<" ";cl;   

}
int main(){

    int t;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        solve();
    }
}
