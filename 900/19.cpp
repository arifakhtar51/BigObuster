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
        ll n,k;
        cin>>n>>k;
        ll temp=n;
        if(n%2==0){
            if(k%4==0){
                cout<<n<<" ";
            }
            else if(k%4==1){
                cout<<(n-k)<<" ";
            }
            else if(k%4==2){
                cout<<n+1<<" ";
            }
            else {
                cout<<n+k+1<<" ";
            }
        }
        else{
            if(k%4==0){
                cout<<n<<" ";
            }
            else if(k%4==1){
                cout<<(n+k)<<" ";
            }
            else if(k%4==2){
                cout<<n-1<<" ";
            }
            else {
                cout<<n-k-1<<" ";
            }
        }
            
        
        
        cl;


        // for(int i=1;i<=k;i++){
        //     if(n&1){
        //         n+=i;
        //     }
        //     else{
        //         n-=i;
        //     }
        //     cout<<temp-n<<" ";
        // }
    }
    int main(){

        int t;
        cin>>t;
        while(t--){
            solve();
        }
    }