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
 int a(string binary) {
    int result = 0;
    for (char c : binary) {
        if (c == '0' || c == '1') {
            result = (result << 1) + (c - '0');
        } else {
            // Handle error for invalid characters
            
            return -1;
        }
    }
    return result;
}

void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    ll maxi=INT_MIN;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        // maxi=max(maxi,arr[i]);
    }
    ll mex=0;
    if(arr[0]<0){
        cout<<abs(arr[0])<<" ";
        mex=0;
    }
    else {
        cout<<0<<" ";
        mex=1;
    }
    // maxi=n-1;
    for(int i=1;i<n;i++){
        ll x=mex-arr[i];
        
        if(x<=mex){
            cout<<mex++<<" ";
        }
        else 
        cout<<x<<" ";
    }
    cl;

}
 int binaryStringToInt(vector<int> binaryArray) {
   int result = 0;
    for (int i = 0; i < binaryArray.size(); ++i) {
        if (binaryArray[i] >= 1) {
            result = (result << 1) + 1;
        } else {
            // Handle error for invalid elements
            // cout << "Invalid binary array.\n";
            return -1;
        }
    }
    return result;
}
int main(){

    int t;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        solve();
        // cout<<binaryStringToInt({1,0,1,1});
    }
}