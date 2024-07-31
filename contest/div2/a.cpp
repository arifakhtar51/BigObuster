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
        if(n&1){
            cn;
            return ;
        }
        string ans="";
        string temp="AA";
        for(int i=0;i<n/2;i++){
            if(i&1)
            ans+=temp;
            else ans+="BB";
        }
        cy;
        cout<<ans;
        cl;
    }
    int main(){

        int t;
        // cout<<string(3,'1');
        cin>>t;
        while(t--){
            solve();
        }
    }