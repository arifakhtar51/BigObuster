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
    
    ll n;
    cin>>n;
    vector<ll>arr(n),brr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    for(ll i=0;i<n;i++){
        cin>>brr[i];
    }
    ll i=0,j=n-1;
    while(i<n && arr[i]==brr[i]){i++;}
    while(j>=0 && arr[j]==brr[j]){j--;}
    // if(i>j){
    //     if(is_sorted(begin(arr),end(arr))){
    //         cout<<1<<" "<<n<<" ";cl;return ;
    //     }
    //     else {
    //         ll x=0,y=n-1;
    //         ll cnt=1;
    //         ll maxi=1;
    //         bool flag=0;
    //         for(ll i=0;i<n-1;i++){
    //             if(arr[i]==arr[i+1]){
    //                 cnt++;
    //             }
    //             else {
    //                 if(x!=0)
    //                 y=i+1;
    //                 cnt=1;
    //                 flag=0;
    //             }
    //             if(cnt>maxi){
    //                 if(flag==0){
    //                     x=i+1;flag=1;}
    //                 maxi=cnt;
    //             }
    //         }
    //         cout<<x<<" "<<y;cl;return ;

    //     }
    // }
    ll p=i,r=j;

    ll maxi=brr[j],mini=brr[i];
    
    if(i!=0){
        ll newi=i;
        i--;
        while(i>=0){
        
            if(arr[i]>mini){
                break;
            }
            mini=min(mini,arr[i]);
            newi=i;
            i--;
        }
        p=newi;
    }
    if(j!=n-1){
        ll newj=j;
        j++;
        while(j<n){
            if(arr[j]<maxi){
                break;
            }
            maxi=max(arr[j],maxi);
            newj=j;
            j++;
        }
        r=newj;
    }
    // check for left than right 
    



    cout<<p+1<<" "<<r+1;cl;

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