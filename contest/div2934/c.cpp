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
    struct ComparePairs {
    bool operator()(const pair<ll, ll>& a, const pair<ll, ll>& b) const {
        // Compare the first elements of the pairs
        return a.first > b.first;
    }
};
    void solve(){
        ll n;
        cin>>n;
        vector<ll>arr(n);
        set<ll>st;
        unordered_map<ll,ll>mp;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
            // st.insert(arr[i]);
        }
        priority_queue<pair<ll,ll>,vector<pair<ll,ll>>, ComparePairs>pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        while(!pq.empty()){
            auto i=pq.top();
            cout<<i.first<<" "<<i.second;cl;
            if(i.first-1>=1)
                pq.push({i.second-1,i.first});
            pq.pop();

        }
        // ll ans=1e9+7;
        // ll mn=0;
        ll ans=0;

        
        // vector<ll>t;
        // for(auto i:st){
        //     t.push_back(i);
        // }
        // sort(t);
        // ll mn2=INT_MAX;
        // ll minI=t.size();
        // for(ll i=0;i<t.size();i++){
        //     if(t[i]!=i){
        //         minI=i;
        //         break;
        //     }
        // }

        // for(int i=0;i<t.size();i++){
        //     ll ele=t[i];
        //     if(mp.count(i)==0){
        //             cout<<i<<endl;
        //         return ;
        //     }
        //     if((mp[ele]<=mn)){
        //         mn=ele;
        //         break;
        //     }
        //     mn++;
            
        // }

        // // for(auto i:mp){
        // //     if(i.first<i.second){
        // //         ans=min(ans,i.first);
        // //     }
        // //     // mn=min(mn,i.second);
        // // }
        
        // // ll ans2=0;
        
        // // while(1){
        // //     if(mp[ans2]){
        // //         ans2++;
        // //         if(mp[ans2]%2==0){
        // //             ans2++;
        // //         }
        // //         else {
                    
        // //             break;  
        // //         }
        // //     }
        // //     else {
                
        // //         break;
        // //     }
            
        // // }
        // cout<<min(minI,mn)<<endl;
        // cout<<min(ans2,ans)<<endl;

    }
    int main(){

        int t;
        // cout<<string(3,'1');
        cin>>t;
        while(t--){
            solve();
        }
    }