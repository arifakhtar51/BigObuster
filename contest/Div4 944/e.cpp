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

vll prefixSum(vll&arr,vll&psum){
    psum[0]=arr[0];int n=arr.size();
    for(int i=1;i<n;i++)psum[i]=psum[i-1]+arr[i];
    return psum;
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
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}

/* ===============BoilerPlate code end=========== */
/*====================You can Do it man!!====================*/
/*=================Think a bit more=============*/
// author -arifakhtar

void sol(int k,vll &qw,vll &arr,vll &brr,vll &anss){
    ll n=arr.size();
    for(int i=0;i<qw.size();i++){
        int d=qw[i];
        if(k==1){
            anss.push_back(d);
            continue;
        }
        auto lb=lower_bound(begin(arr),end(arr),d)-begin(arr);
        // auto ub=lower_bound(begin(arr),end(arr),d)-begin(arr);
        // cout<<lb<<" - "<<ub<<" ";cl;
        if(lb>=n){
            // cout<<<<" ";
            ll val=brr[n-1]+(d-arr[n-1]);
            anss.push_back(val);
            continue;
        }
        
        ll t1=brr[lb];
        ll t2=brr[lb-1];
        ll c=1/((arr[lb]-arr[lb-1])/(t2-t1));
        ll ans=t2+(d-arr[lb])*c;
        anss.push_back(ans);
    }
    

}
void solve(){
    ll n,k,q;
    cin>>n>>k>>q;
    // anss.clear();
    vll arr(k);
    vll brr(k);
    for(ll i=0;i<k;i++)cin>>arr[i];
    for(ll i=0;i<k;i++)cin>>brr[i];

    vll qw;
    while(q--){
        ll d;
        cin>>d;
        qw.push_back(d);
    }
    vll anss;
    sol(k,qw,arr,brr,anss);
    printarr(anss);
    cn;
    

    cl;

}
int main(){

    int t=1;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        solve();
    }
}