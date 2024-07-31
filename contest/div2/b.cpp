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
    bool isSorted(vector<ll>&arr) {
        ll size=arr.size();
    for (ll i = 0; i < size-1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false; 
        }
    }
    return true;
}
unordered_map<ll,ll>mp;
bool check(ll a,ll b){
    while(a){
        if(a%10>b){
            return 0;
        }
        mp[a%10]++;
        a/=10;
    }
    
    return 1;
}
bool check2(vector<ll>&arr,int i){
    for(int j=i-1;j>=0;j--){
        bool ans=check(arr[j],arr[i]);
        if(ans==0)return 0;
    }
     return 1;
}

    void solve(){
        ll n;
        cin>>n;
        vector<ll>temp;
        vector<ll>arr;
        for(int i=0;i<n;i++){
            ll t;
            cin>>t;
            arr.push_back(t);
        }
        if(isSorted(arr)){
            cy;
            return ;
        }
         vector<ll>tempAns;
        if(n==1){cy;return ;}
         tempAns.push_back(arr.back());
        for (int i=n-2; i>= 0; --i) {
            if (arr[i]>= 10){
                // then only break
                if( arr[i] > tempAns.back()){
                    tempAns.push_back(arr[i]%10);
                    tempAns.push_back(arr[i]/10);
                }
                else continue;
            
            } else {
                tempAns.push_back(arr[i]);
            }
        }

        reverse(begin(tempAns),end(tempAns));
        bool an = isSorted(tempAns);
        if(an==1){
            cy;
        }
        else cn;


        
        // for(int i=0;i<n-1;i++){
        //     if(arr[i]>arr[i+1]){
        //         vector<ll>tem;
        //         ll ele=arr[i];
        //         ll mn=ele%10;
        //         while(ele){
        //             ll t=ele%10;
        //             mn=max(mn,t);
        //             tem.push_back(t);
        //             ele/=10;
        //         }
        //         rev(tem);
        //         if(!isSorted(tem)){
        //             cn;return ;
        //         }

        //         arr[i]=mn;
        //     }
            
        // }

        // if(isSorted(arr)){
        //     cy;
        // }
        // else cn;
        // for(int i=0;i<n;i++){
        //     ll t=arr[i];
        //     temp.push_back(to_string(t));
        // }
        // string x=temp[0];
        // int sze=x.size();
        // if(x[0]>x[sze-1]){
        //     cn;
        //     return ;
        // }
        // for(int i=1;i<n-1;i++){
        //     string curr=temp[i];
        //     int sz=curr.size();
        //     string prev=temp[i-1];
        //     int szP=prev.size();
        //     string next=temp[i+1];
        //     int szN=next.size();

        //     if(sz==1){
        //         if(prev[szP-1]>curr[0] || curr[0]>next[0]){
        //             cn;return ;
        //         }
        //     }
        //     else {
        //         if(prev[szP-1]>curr[0] || curr[0]>curr[sz-1] ||curr[sz-1]>next[0]){
        //             cn;return ;
        //         }
        //     }
            
        // }
        // cy;
    }
    int main(){

        int t;
        // cout<<string(3,'1');
        cin>>t;
        while(t--){
            solve();
        }
    }