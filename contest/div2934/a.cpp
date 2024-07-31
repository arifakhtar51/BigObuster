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
    bool isSorted(vector<ll>&arr) {
        ll size=arr.size();
    for (ll i = 0; i < size-1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false; 
        }
    }
    return true;
}
unordered_map<ll,ll>mp;
bool check(ll a,ll b){
    while(a){
        if(a%10>b){
            return 0;
        }
        mp[a%10]++;
        a/=10;
    }
    
    return 1;
}
bool check2(vector<ll>&arr,int i){
    for(int j=i-1;j>=0;j--){
        bool ans=check(arr[j],arr[i]);
        if(ans==0)return 0;
    }
     return 1;
}

    void solve(){
        ll n,k;
        cin>>n>>k;
        if(k>=n-1){
            cout<<1<<endl;
        }
        else cout<<n<<endl;
        

        

    }
    int main(){

        int t;
        // cout<<string(3,'1');
        cin>>t;
        while(t--){
            solve();
        }
    }