    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    #define cl cout<<endl;
    #define cy cout<<"Yes"<<endl;
    #define cn cout<<"No"<<endl;
    #define vll vector<ll>
        #define vi vector<int>
    int lcm(int a,int b){
        return a*b/__gcd(a,b);
    }
    void solve(){
        ll n;
        cin>>n;
        vector<int>arr(n);
        int maxi=0;

        for(ll i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>maxi)maxi=arr[i];
        }
        int ans=arr[0];
        for(auto ele:arr){
            ans=ans&ele;
        }
        cout<<ans<<endl;
        

    }
    int main(){

        int t;
        cin>>t;
        while(t--){
            solve();
        }
    }