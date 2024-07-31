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


unordered_map<ll, ll> memo;
bool flag;

ll so(vector<ll>& prr, vector<ll>& arr, ll pos, ll k, ll maxi) {
    // Check if the solution for this subproblem has been previously calculated
    if (memo.find(pos * 100000 + k) != memo.end())
        return memo[pos * 100000 + k];
    
    if (k <= 0) {
        return 0;
    }

    if (arr[pos - 1] == maxi) {
        flag = true;
        return memo[pos * 100000 + k] = maxi * k;
    }

    if (flag) return 0;
    
    ll in = arr[pos - 1] + so(prr, arr, prr[pos - 1], k - 1, maxi);
    ll ex = arr[pos - 1] + so(prr, arr, pos, k - 1, maxi);

    // Store the result of this subproblem in the memoization table
    memo[pos * 100000 + k] = max(in, ex);

    return memo[pos * 100000 + k];
}




ll sol(vector<ll>&prr,vector<ll>&arr,ll pos,ll k,ll maxi){
    ll ans=0;
    ll pre=0;
    ll n=arr.size();
    for(ll i=0;i<n;i++){
        if(k<=0)break;
        ll temp=arr[pos-1]*k+pre;
        ans=max(ans,temp);
        pre+=arr[pos-1];
        k--;
        
        pos=prr[pos-1];

    }
    return ans;

}
void solve(){
    ll n,k,pb,ps;
    cin>>n>>k>>pb>>ps;
    vector<ll>Prr(n),Arr(n);
    for(ll i=0;i<n;i++){
        cin>>Prr[i];
    }
    ll maxi=0;
    for(ll i=0;i<n;i++){
        cin>>Arr[i];
        maxi=max(maxi,Arr[i]);
    }
    ll sc1;
    ll sc2;

        flag=0;
        sc1=sol(Prr,Arr,pb,k,maxi);
        flag=0;
        sc2=sol(Prr,Arr,ps,k,maxi);
    
    
    // cout<<"score"<<" ";
    // cout<<sc1<<" "<<sc2;cl;
    if(sc1==sc2){
        cout<<"Draw";cl;return ;
    }
    if(sc1>sc2){
        cout<<"Bodya";cl;
    }
    else {
        cout<<"Sasha";cl;
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