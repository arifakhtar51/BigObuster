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
// bool isPalin(string str){
//     if(str.size()==1)return 1;
//     unordered_map<char,int>mp;
//     for(auto i:str){
//         mp[i]++;
//     }
//     int even=0,odd=0;
//     for(auto i:mp){
//         if(i.second&1)odd++;
//         else even++;
//     }
//     if((even==0 && odd==1)|| (even>=1 && odd<=1))return 1;
//     if(odd==1)return 1;
//     if(odd>=2)return 0;
//     return 1;
    
// }
void solve(){
    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    if(n-k==1){
        cy
        return ;
    }
    vector<pair<int,char>>v;
    vector<int>freq(27,0);
    for(int i=0;i<n;i++){
        char ch=str[i];
        // cout<<(str[i]-'a')<<"<-"<<endl;
        freq[str[i]-'a']++;
    }
    for(int i=0;i<27;i++){
        // cout<<freq[i]<<" ";
        if(freq[i]!=0){
            v.push_back({freq[i],'a'+i});
        }
    }
    sort(begin(v),end(v));
    string temp="";
    int cntOdd=0;
    int even=0;
    for(auto i:v){
        // cout<<i.first<<" to  "<<i.second<<endl;
        if(i.first&1==1){
            cntOdd++;}
        else even++;
    }
    int sz=temp.size();
    // string s1=temp.substr(k,sz-k);
    // reverse(begin(temp),end(temp));
    // string s2=temp.substr(k,sz-k);

    // cout<<temp<<"<- temp"<<endl;
    if(cntOdd==0)cy
    else if(cntOdd==1)cy
    else{
        if(cntOdd-k==1)cy
        else if(cntOdd==k|| cntOdd-1==k|| cntOdd==k-1|| k>=cntOdd)cy
        else cn
    }
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}