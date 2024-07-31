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
#define pll pair<ll,ll>

bool static  mycomp(pair<ll,ll>&p1,pair<ll,ll>&p2){
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
    map<ll,vll,greater<ll>>mp;
    vll ans;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%k==0){
            ans.push_back(i+1);
        }
        else{
            mp[arr[i]%k].push_back(i+1);
        }
    }
    for(auto i :ans){
        cout<<i<<" ";
    }
for(auto i:mp){
    for(auto j:i.second){
        cout<<j<<" ";
    }
}
    vpll vp;
    //   auto comparator = [](const pll &a, const pll &b) {
    //     if (a.first == b.first) {
    //         return a.second > b.second;
    //     } else {
    //         return a.first < b.first;
    //     }
    // };

    // priority_queue<pll, vector<pll>, decltype(comparator)> maxHeap(comparator);
    // for(int i=0;i<n;i++){
    //     maxHeap.push({arr[i],i+1});
    // }
    // sort(begin(maxHeap),end(maxHeap),[](const pll &a,const pll &b){
    //     if(a.first==b.first){
    //         return a.second<b.second;
    //     }
    //     else return a.first>b.first;
    // });
    // while(!maxHeap.empty()){
    //     // cout<<maxHeap.top().first<<" "<<maxHeap.top().second;cl;
    //     ll a=maxHeap.top().first;
    //     ll b=maxHeap.top().second;
    //     maxHeap.pop();
    //     if(a-k<=0){
    //         cout<<b<<" ";
    //     }
    //     else{
    //         maxHeap.push({a-k,b});
    //     }
        
    // }
    cl;

}
int main(){

    int t;
    // cout<<string(3,'1');
    cin>>t;
    ll n=0;
    while(t--){
        // cout<<"test case="<<++n<<" ";cl;
        solve();
    }
}