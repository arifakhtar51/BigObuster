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
#define um unordered_map<ll,ll>


// Prefix sum

vll prefixSum(vll&arr){
    vll psum(arr.size(),0);
    psum[0]=arr[0];int n=arr.size();
    for(int i=1;i<n;i++)psum[i]=psum[i-1]+arr[i];
    return psum;
}
vll factors(ll n){
    vll fact;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i==i){
                fact.push_back(i);
            }
            else {
                fact.push_back(i);
                fact.push_back(n/i);

            }
        }
    }
    return fact;
}

    

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
ll power(ll a,ll b){
    if(!b)return 1;
    ll temp=power(a,b/2);
    temp*=temp;
    if(b&1)temp*=a;
    return temp;
}
int lcm(int a,int b){return a*b/__gcd(a,b);}


/* ===============BoilerPlate code end=========== */
/*====================You can Do it man!!====================*/
/*=================Think a bit more=============*/
// author -arifakhtar

ll sol(vll &arr,ll k){
    if(k==1 || k==arr.size())return 0;
    ll gcd=0;
    ll i=0;
    ll n=arr.size();
    bool flag=1;
    while(i<n){
        ll j=i,sm=0;
        while( j<i+k && j<n ){
            sm+=arr[j];
            // cout<<arr[j]<<"  ";
            j++;
        }
        i+=k;
        // cout<<sm<<" ";
        gcd=__gcd(gcd,sm);
    }
    // cl;
    return gcd;

}

void solve(){
    
    ll n;
    cin>>n;
    ll total=0;
    vector<ll>arr(n);for(ll i=0;i<n;i++){cin>>arr[i];}

     total=accumulate(begin(arr),end(arr),(ll)0);
    // accumulate use kar ke ans wrong ans ??
    // because 0 is int we have to convert in ll
    vll f=prefixSum(arr);
    ll maxi=0;

    for(int i=0;i<n-1;i++){
        ll left=f[i];
        ll right=total-f[i];
        maxi=max(maxi,__gcd(left,right));
    }
    cout<<maxi<<" ";cl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t=1;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){

        solve();

    }

}