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
    ll n,d;
    cin>>n>>d;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    srt(arr);
    ll i=0,j=n-1;
    ll ans=0;
    while(i<=j ){
        if(i==j){
            if(arr[i]>d)ans++;
             break;
        }
        // cout<<i<<" "<<j;cl;
        if(arr[j]<=d){
            if(arr[j]*2>d){
                ans++;
                i++;
                j--;
            }
            else {
                ll temp=arr[j];
                ll t=temp;
                while(i<j){
                    temp+=t;
                    
                    i++;
                    if(temp>d){
                        ans++;
                        break;
                    }
                }
                j--;
            }
        }
        else {
            ans++;
            j--;
        }
    }
    cout<<ans<<" ";cl;
}
int main(){

    int t=1;
    // cout<<string(3,'1');
    // cin>>t;
    while(t--){
        solve();
    }
}