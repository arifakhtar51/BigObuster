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
ll power(ll a,ll b){
    if(!b)return 1;
    ll temp=power(a,b/2);
    temp*=temp;
    if(b&1)temp*=a;
    return temp;
}
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}

/* ===============BoilerPlate code end=========== */
/*====================You can Do it man!!====================*/
/*=================Think a bit more=============*/
// author -arifakhtar



void solve(){
    
    
    string s;
    cin>>s;
    ll n=s.size();
    if(n==1 && s[0]=='1'){
        cout<<1<<" ";cl;return ;
    }
    ll max0=0;
    for(char &ch:s)if(ch=='0')max0++;
    if(max0==n){
        cout<<0;cl;return ;
    }
    if(max0==0){
        cout<<n*n<<" ";cl;return ;
    }
    ll old=n;
    if(max0>=1){
            n=n*2;
    s=s+s;
    }

    ll maxi=0;
    ll cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            cnt++;
        }
        else {
            cnt=0;
        }
        maxi=max(maxi,cnt);
    }
    ll ans=maxi;
    for(int i=1;i<=old;i++){
        ans=max(ans,(maxi-i)*(i+1));
    }
    cout<<ans;cl;


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
    cin>>t;
    while(t--){

        solve();

    }

}