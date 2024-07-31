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
    ll w,h;
    cin>>w>>h;
    vector<ll>a,b,c,d;

    for(ll i=0;i<4;i++){
        ll ele;cin>>ele;
        for(ll j=0;j<=ele;j++){
            if(i==0){
                if(j==0){
                a.push_back(ele);
                }else{
                    int x;cin>>x;a.push_back(x);
                }
            }
            else if(i==1){
                if(j==0){
                b.push_back(ele);
                }else{
                    int x;cin>>x;b.push_back(x);
                }
            }
            else if(i==2){
                if(j==0){
                c.push_back(ele);
                }else{
                    int x;cin>>x;c.push_back(x);
                }
            }
            else {
                if(j==0){
                d.push_back(ele);
                }else{
                    int x;cin>>x;d.push_back(x);
                }
            }
        }
        
    }

    ll maxi=0;
    ll p,q,r;
    p=a[1];
    q=a[a[0]];
    maxi=max(maxi,h*(q-p));
    // cout<<"maxi"<<maxi<<" ";cl;
    p=b[1];
    q=b[b[0]];
    maxi=max(maxi,h*(q-p));
    // cout<<"maxi"<<maxi<<" ";cl;
    p=c[1];
    q=c[c[0]];
    maxi=max(maxi,w*(q-p));
    // cout<<"maxi"<<maxi<<" ";cl;
    p=d[1];
    q=d[d[0]];
    maxi=max(maxi,w*(q-p));
    // cout<<"maxi"<<maxi<<" ";cl;
    // cy;
    cout<<maxi<<" ";cl;
    // cl;cl;
    // printarr(a);
    // cl;printarr(b);cl;printarr(c);cl;printarr(d);
    // cl;cl;
    
}
int main(){

    int t;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        solve();
    }
}