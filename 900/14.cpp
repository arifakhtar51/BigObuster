    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    #define cl cout<<endl;
    #define cy cout<<"Yes"<<endl;
    #define cn cout<<"No"<<endl;
    #define vll vector<ll>
    int lcm(int a,int b){
        return a*b/__gcd(a,b);
    }
    void solve(){
        ll n;
        cin>>n;
        
        if(n&1 ||n<=3 ){
            cout<<-1<<" "<<endl;
        }
        else{
            n/=2;

            if(n%3==0){
                cout<<n/3<<" ";
            }
            else cout<<n/3+1<<" ";
            cout<<n/2<<" "<<endl;
            
        }
    }
    int main(){

        int t;
        cin>>t;
        while(t--){
            solve();
        }
    }