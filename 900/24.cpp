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
    ll gogo(ll a ,ll n){
        ll oprn=0;
        if(n%a==0)return 0;
        ll cnt=0,cnt1=0;
        ll temp=a;
        cnt=abs(a-n);
        
            cnt1=n%a;
        
        
        return min(cnt,cnt1);
    }
    void solve(){
        ll n,m;
        cin>>n>>m;
        if(n==m){
            cout<<0<<" "<<0<<endl;
            return ;
        }
        ll a=abs(n-m);
        ll o=(a-n%a);
        ll two=n%a;

        cout<<a<<" "<<min(o,two)<<" ";
        cl;
        
        

        
    }
    int main(){

        int t;
        cin>>t;
        int cnt=0;
        while(t--){
            // cout<<cnt<<" "<<endl;
            cnt++;
            solve();
        }
    }