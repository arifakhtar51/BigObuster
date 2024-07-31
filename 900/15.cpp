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
        vector<ll>arr(n);
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        ll oprn=0;
        for(int j=n-2;j>=0;j--){
            if(arr[j]>=arr[j+1]){
                while(arr[j]!=0&&arr[j]>=arr[j+1]){arr[j]/=2;oprn++;}
            }
        }
        for(int i=1;i<n;i++){
            if(arr[i]<=arr[i-1]){
                cout<<-1<<" "<<endl;
                return ;
            }
        }
        cout<<oprn<<endl;
        
    }
    int main(){

        int t;
        cin>>t;
        while(t--){
            solve();
        }
    }