    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    #define cl cout<<endl;
    #define cy cout<<"YES"<<endl;
    #define cn cout<<"NO"<<endl;
    #define vll vector<ll>
    #define sort(x) sort(begin(x),end(x))
    #define vi vector<int>
    #define rev(x) reverse(begin(x),end(x))
    int lcm(int a,int b){
        return a*b/__gcd(a,b);
    }
    void solve(){
        ll n,k;
        cin>>n>>k;
        vector<ll>arr(n*k,0);
        for(ll i=0;i<n*k;i++){
            cin>>arr[i];
        }
        if(n==2){
            ll sm=0;
            for(int i=0;i<n*k;i+=2){
                sm+=arr[i];
            }
            // cy;
            cout<<sm;cl;
            return ;

        }
        
        

        ll sm=0;
        ll t=0;
        for(ll i=n*k-(n/2)-1;i>=0;i=i-(n/2)-1){
            if(t>=k)break;
            // cout<<arr[i]<<" ";
            sm+=arr[i];
            t++;
        }
        // cl;
        // cy;
        cout<<sm<<" "<<endl;

    }
    int main(){

        int t;
        cin>>t;
        while(t--){
            solve();
        }
    }