    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    #define cl cout<<endl;
    #define cy cout<<"YES"<<endl;
    #define cn cout<<"NO"<<endl;
    #define cyr cout<<"YES"<<endl; 
    #define cnr cout<<"NO"<<endl;
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
    void solve(){
        ll n,k;
        cin>>n>>k;
        vector<ll>arr(2*n);
        for(ll i=0;i<2*n;i++){
            cin>>arr[i];
        }
        map<ll,vector<ll>>mp;
        for(int i=0;i<n;i+=k){
            vector<ll>temp;
            ll xo=0;
            if(i+k<n){
                for(int j=i;j<=k+i&&j<n;j++){
                    xo^=arr[j];
                    temp.push_back(arr[j]);
                }
            }
            else break;
            if(mp.find(xo)!=mp.end()){
                cout<<"ans";cl;
                
                auto v=mp[xo];
                
                for(auto k:v){
                    cout<<k<<" ";
                }
                cl;
                for(auto ele:temp){
                    cout<<ele<<" ";
                }
                cl;
                return ;

            }
            if(temp.size()>=1)
            mp[xo]=temp;
            
            
        }

        
    }
    int main(){

        int t;
        cin>>t;
        while(t--){
            solve();
        }
    }