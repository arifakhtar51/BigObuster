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
        string s;
        cin>>s;
        ll ans=1e18;
        ll n=s.size();
        ll i=s.size()-1;
        while(i>=0 ){
            if(s[i]=='5')break;
            i--;
        }
        if(i>=0){
            int j=i-1;
            bool flag=0;
            while(j>=0){
                if(s[j]=='2'|| s[j]=='7'){
                    flag=1;break;
                }
                j--;
            }
            if(flag)ans=min(ans,i-j-1+(n-i-1));
        }
        i=n-1;
        while(i>=0){
            if(s[i]=='0')break;
            i--;
        }
        if(i>=0){
            ll j=i-1;
            bool flag=0;
            while(j>=0){
                if(s[j]=='0'||s[j]=='5'){
                    flag=1;
                    break;

                }j--;
            }
            if(flag){
                
                    ans=min(ans,n-i-1+(i-j-1));
                
            }

        }
        // cout<<ans<<" "<<endl;
        // if((s[i]=='0')|| (i<=s.size()-2 && s[i+1]=='0')){
        //     cout<<s.size()-1-i<<"<-";cl;
        //     return ;
        // }

        
    }
    int main(){

        int t;
        cin>>t;
        while(t--){
            solve();
        }
    }