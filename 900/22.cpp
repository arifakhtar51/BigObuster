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
    ll ans=0;
    vector<ll>temp;
    void fun(vector<ll>&arr,ll i,ll sm,ll target){
        if(i>=arr.size()){
            if(sm==target)ans++;
            // for(auto j:temp)cout<<j<<" ";
            // cout<<endl;
            return ;
        }
        if(sm>target)return ;
        // temp.push_back(arr[i]);
        fun(arr,i+1,sm+arr[i],target);
        // temp.pop_back();
        fun(arr,i+1,sm,target);

    }
    void solve(){
        ll n;
        cin>>n;
        ll target=0;
        vector<ll>arr(n);
        bool flag=0;
        ll one=0,zero=0;
        unordered_map<int,int>mp;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1)one++;
            if(arr[i]==0)zero++;
            
        }
        ll an=one+(pow(2,zero)-1)*one;
        cout<<an<<endl;
        // if(flag==0){
        //         cout<<0<<endl;
        //         return ;
        // }
        
        // for(auto i:mp){
        //     if(i.second>=2)
        //         ans+=i.second;
        //     if(i.first==0){
        //         ans=ans+1;
        //     }
        // }

        // fun(arr,0,0,target-1);
        // cout<<ans<<"\n";
    }
    int main(){

        int t;
        cin>>t;
        while(t--){
            solve();
        }
    }