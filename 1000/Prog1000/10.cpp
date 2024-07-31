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

vector<ll>an;
void solve(){
    ll n;
    char ch;
    cin>>n;cin>>ch;
    string str;
    cin>>str;
    vector<ll>a,b;
    for(int i=0;i<n;i++){
        if(str[i]==ch){
            a.push_back(i+1);
        }
        if(str[i]=='g'){
            b.push_back(i+1);
        }

    }
    if(ch=='g'){
        an.push_back(0);
        cout<<0;cl;return ;
    }
    ll ans=0;
    // printarr(a);
    // cl;
    // printarr(b);
    // cl;

    for(int i=0;i<a.size();i++){
        int ele=a[i];
        ll ub=upper_bound(begin(b),end(b),ele)-b.begin();
        if(ub==b.size()){
            ans=max(ans,abs(b[0]+(n-ele)));
        }
        else 
        ans=max(ans,b[ub]-ele);
        // cout<<"ub= "<<ub<<" - "<<ele<<"= "<< b[ub-1]-ele;cl;
    }
    an.push_back(ans);
    cout<<ans;
    cl
}
int main(){

    int t;
    // cout<<string(3,'1');
    cin>>t;
    ll cnt=0;
    while(t--){
        cnt++;
        // if(cnt==17){
        //     for(auto i:an){
        //         cout<<i;cl;
        //     }
        // }
        solve();
    }
}