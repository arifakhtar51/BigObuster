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
    
    ll n,x;
    cin>>n>>x;
    queue<ll>s1,s2,s3;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;s1.push(a);
    }
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;s2.push(a);
    }
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;s3.push(a);
    }
    ll ans=0;
    bool a=1,b=1,c=1;
    while(1){
        if(ans==x){
            cy;return ;
        }
        if(a==1 && (!s1.empty())){
            ll ele=s1.front();
            // cout<<"ele="<<ele;cl;
            for(int i=0;i<33;i++){
                if((ele>>i)&1==1){
                    // bit set
                    // cout<<"ye=>"<<x;cl;
                    // cout<<i<<" =i ";cl;
                    // cout<<((x>>i)&1)<<" <- ";
                    if(((x>>i)&1)==0){
                        a=0;
                        
                        break;
                    }
                }
            }
            if(a==1){
                // cout<<"Yaha";
                s1.pop();
                ans=ans|ele;
            }
            
        }
        else if(b==1 && !s2.empty()){
            ll ele=s2.front();
            for(int i=0;i<33;i++){
                if(((ele>>i)&1)==1){
                    // bit set
                    if(((x>>i)&1)!=1){
                        b=0;
                        break;
                    }
                }
            }
            if(b==1){
                s2.pop();
                ans=ans|ele;
            }
        }
        else if(c==1 && !s3.empty()){
            ll ele=s3.front();
            for(int i=0;i<33;i++){
                if(((ele>>i)&1)==1){
                    // bit set
                    if(((x>>i)&1)!=1){
                        c=0;
                        break;
                    }
                }
            }
            if(c==1){
                s3.pop();
                ans=ans|ele;
            }
        }
        else {
            break;
        }
        // cout<<ans<<" ";
    }
    cn;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t=1;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){

        solve();

    }

}