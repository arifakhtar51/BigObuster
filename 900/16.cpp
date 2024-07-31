    #include<bits/stdc++.h>
    #include <algorithm>
    #define ll long long
    using namespace std;
    #define cl cout<<endl;
    #define cy cout<<"Yes"<<endl;
    #define cn cout<<"No"<<endl;
    #define vi vector<int>
    #define vll vector<ll>
    #define debug(x) for(auto &i:x)cout<<i<<" ";
    #define reverse(x) reverse(begin(x),end(x))
    int lcm(int a,int b){
        return a*b/__gcd(a,b);
    }
    void solve(){
        string s,t;
        cin>>s>>t;
        if(s==t){cy;return ;}
        if(t.size()>s.size()){cn;return ;}
        vi temp;
        unordered_map<char,int>mp,mp2;
        for(auto ch:s){
            mp[ch]++;
        }

        for(auto c:t){
            if(!mp[c]){
                cn;
                return ;
            }
            mp2[c]++;
        }
        for(auto i:mp){
            char ch=i.first;
            int cnt=i.second;
            if(cnt>mp2[ch]){
                while(cnt>mp2[ch]){
                    auto j=s.find_first_of(ch);
                    
                    cnt--;
                    mp[s[j]]--;
                    s[j]='#';
                }
                
            }
        }
        string st="";
        for(auto i:s){
            if(i!='#'){
                st+=i;
            }
        }
        if(st==t)cy
        else cn;
        // cout<<s<<" "<<endl;

        // for(int i=0;i<t.size();i++){
        //     char ch=t[i];
        //     if(mp[ch]<1){
        //         cn;
        //         return ;
        //     }
        //     // auto j=find_first_of(s.begin(), s.end(), ch);
        //     auto j=s.find_first_of(ch);
        //     if(i==0||j>temp[temp.size()-1]){
        //         // cout<<" yaha = "<<" ";
        //         temp.push_back(j);
        //     }
        //     else{
        //         if(mp[ch]>=2){
        //             auto lm=s.find_last_of(ch);
        //             // cout<<" yaha lm= "<<lm<<" ";
        //             temp.push_back(lm);
        //         }
        //         else{
        //             cn;
        //             return ;
        //         }
        //     }
        
            // cout<<j<<" ";
        // }
        // debug(temp);
        // for(int i=0;i<temp.size()-1;i++){
        //     if(temp[i]>=temp[i+1]){
        //         cn;
        //         return ;
        //     }
        // }
        // cy;
        
    }
    int main(){

        int t;
        cin>>t;
        while(t--){
            solve();
        }
    }