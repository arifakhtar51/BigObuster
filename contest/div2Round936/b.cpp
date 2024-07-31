#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define cyr cout<<"YES"<<endl; return ;
#define cnr cout<<"NO"<<endl; return ;
#define vll vector<ll>
#define sort(x) sort(begin(x),end(x))
#define vi vector<int>
#define rev(x) reverse(begin(x),end(x))
#define printarr(arr) for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
#define sortr(x) sort(rbegin(x),rend(x))
#define MOD 1e9+7
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
int lcm(int a,int b){return (a*b/__gcd(a,b));}
long long power_of_two(int n) {
    if (n == 0)
        return 1;

    long long result = 1;
    int md=1e9+7;
    for(int i=1;i<=n;i++){
        result=(result*2)%md;
    }

    return result%md;
}
ll kadanMaxSum(vector<ll>&arr){
    ll  ans=0;
    ll sm=0;
    ll n=arr.size();
    ll md=1e9+7;
        long long maxi=arr[0];
        for(int i=0;i<n;i++){
            sm=(sm+arr[i]);
            if(sm<0)sm=0;
            
            maxi=max(sm,maxi);
        }
        return (maxi);
}

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>arr(n);
    ll total=0;
    ll md=1e9+7;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        total=(total+arr[i]);

    }
    ll SumSubArray=kadanMaxSum(arr);
    total=((total-SumSubArray)%md)%md;
    SumSubArray%=md;
    ll temp=(((SumSubArray%md*(power_of_two(k)%md))%md)%md);
    ll ans=((total%md)+(temp%md))%md;
    cout<<(ans+md)%md;cl;

}
int main(){

    int t;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        // int x=1e9+7;
        // cout<<(-19+x)%(x)<<" ";
        solve();
    }
}
