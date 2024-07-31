#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define cyr cout<<"YES"<<endl; return ;
#define cnr cout<<"NO"<<endl; return ;
#define vll vector<ll>
#define vpll vector<pll>
#define srt(x) sort(begin(x),end(x))
#define vi vector<int>
#define pll pair<ll,ll>
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
bool isSorted(vector<ll>& vec) {
    for (size_t i = 0; i < vec.size() - 1; i++) {
        if (vec[i] > vec[i + 1]) {
            return false; // Vector is not sorted
        }
    }
    return true; 
}

void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    if(isSorted(arr)){
        cy;return ;
    }
    ll mn=0;
    bool flag=1;
    vll vp;
    ll d1=-1,d2=-1;
    for(ll i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
          
                ll diff=abs(arr[i]-arr[i-1]);
                   ll diff2=diff;
                   if(i+1<n)diff2=abs(arr[i+1]-arr[i]);
                   mn=max(diff,diff2);
                   
            
            vp.push_back(mn);
        }
    }
    // rev(vp);
    for(int i=0;i<vp.size()-1;i++){
        if(vp[i]<vp[i+1]){
            cn;return ;
        }
    }
    cy;

    
}
int main(){

    int t;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        solve();
        
    }

}