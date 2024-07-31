// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// #define cl cout<<endl;
// #define cy cout<<"YES"<<endl;
// #define cn cout<<"NO"<<endl;
// #define cyr cout<<"YES"<<endl; return ;
// #define cnr cout<<"NO"<<endl; return ;
// #define vll vector<ll>
// #define vpll vector<pll>
// #define srt(x) sort(begin(x),end(x))
// #define vi vector<int>
// #define pll pair<ll,ll>
// #define rev(x) reverse(begin(x),end(x))
// #define printarr(arr) for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
// #define sortr(x) sort(rbegin(x),rend(x))
// void FindPrime(){
//     vector<bool>Prime(3001,1);
//     Prime[0]=0;
//     Prime[1]=0;
//     for(int i=2;i*i<=3000;i++){
//         int j=i*i;
//         while(j<=3000){
//             Prime[j]=0;
//             j+=i;
//         }
//     }
// }
// int sumOfDigit(int n){
//     int sm=0;
//     while(n){
//         sm+=n%10;
//         n/=10;
//     }
//     return sm;
// }
// int lcm(int a,int b){
//     return a*b/__gcd(a,b);
// }

// /* ===============BoilerPlate code end=========== */
// /*====================You can Do it man!!====================*/
// /*=================Think a bit more=============*/
// // author -arifakhtar
// bool isSorted(vector<ll>& vec) {
//     for (size_t i = 0; i < vec.size() - 1; i++) {
//         if (vec[i] > vec[i + 1]) {
//             return false; // Vector is not sorted
//         }
//     }
//     return true; 
// }

// void solve(){
//     ll n;
//     cin>>n;
//     ll a=n,b=n,c=(log2(n)+1); 
//         a<<=c; 
//         b<<=c; 

//         b+=n;
//         cout<<a<<" "<<b;cl;
// }
// int main(){

//     int t;
//     // cout<<string(3,'1');
//     cin>>t;
//     while(t--){
//         solve();
        
//     }

// }
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
    ll n,k;
    cin>>n>>k;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<ll>te=arr;
    ll cow=arr[k-1];
    ll i=0;
    ll ans=0;
    ll ind=0;
    // if(k==1)i++;
    while(i<n){
        if(arr[i]>=cow){
            ind=i;
            swap(arr[i],arr[k-1]);
            break;
        }
        i++;
    }
    if(arr[0]!=cow)ans++;
    i++;
    while(i<n){
        if(arr[i]<cow){
            ans++;
            i++;
        }
        else break;
        
    }
    // cout<<"after";cl;
    // printarr(arr);
    // cl;
    
    swap(te[k-1],te[0]);
    // printarr(te);cl;
    ll ans2=0;
    for(int i=1;i<n;i++){
        if(te[i]<te[0]){
            ans2++;
        }
        else break;
    }
// cout<<"ans="<<ans;cl;
    // cy;
    cout<<max(ans2,ans);cl;
}
int main(){

    int t;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        solve();
    }
}