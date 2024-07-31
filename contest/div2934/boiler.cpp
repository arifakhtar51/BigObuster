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
    void solve(){
        ll n;
        cin>>n;
        vector<ll>arr(n);
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
    }
    int main(){

        int t;
        // cout<<string(3,'1');
        cin>>t;
        while(t--){
            solve();
        }
    }
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
        ll m=2*n;
        vector<ll>arr(m);
        for(ll i=0;i<2*n;i++){
            cin>>arr[i];
        }

        if(arr[0]==arr[1]){
            
            cout<<arr[0]<<" "<<arr[1];cl;
            cout<<arr[2]<<" "<<arr[2];cl;
        }
        else{
            cout<<arr[0]<<" "<<arr[1];cl;
            cout<<arr[0]<<" "<<arr[1];cl;

        }
    }
    int main(){

        int t;
        cin>>t;
        while(t--){
            solve();
        }
    }