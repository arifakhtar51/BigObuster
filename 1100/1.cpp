#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define cyr cout<<"YES"<<endl; return ;
#define cnr cout<<"NO"<<endl; return ;
#define vll vector<ll>
#define srt(x) sort(begin(x),end(x))
#define vi vector<int>
#define rev(x) reverse(begin(x),end(x))
#define printarr(arr) for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
#define sortr(x) sort(rbegin(x),rend(x))
#define vpll vector<pair<ll,ll>>
#define um unordered_map<ll,ll>


bool static  mycomp(pair<ll,ll>p1,pair<ll,ll>p2){
    if(p1.first==p2.first){
        return p1.second>p2.second;
    }
    else {
        return p1.first<p2.first;
    }
}
void FindPrime(){
    vector<bool>Prime(3001,1);
    Prime[0]=0;
    Prime[1]=0;
    for(int i=2;i*i<=3000;i++){
        int j=i*i;
        while(j<=3000){
            Prime[j]=0;
            j+=i;
        }
    }
}
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

/* ===============BoilerPlate code end=========== */
/*====================You can Do it man!!====================*/
/*=================Think a bit more=============*/
// author -arifakhtar


ll sol(string str,set<string>&mp){
    // cout<<str<<" ";
    if(str.size()==1){
        mp.insert(str);return 0;
    }
    
    char ch=str[str.size()-1];
    str.pop_back();
    ll a=sol(str,mp);
    str.push_back(ch);
    char ch2=str[0];
    str.erase(0,1);
    ll b=sol(str,mp);
    str=ch2+str;
    // cout<<t<<" ";
    // mp[str]++;
    mp.insert(str);
    return 0;
}
void solve(){
    ll n;
    cin>>n;
    set<char>mp;
    string str;
    cin>>str;
    //    cout<<mp.size();cl;
    ll sa=0;
    for(int i=0;i<n;i++){
        mp.insert(str[i]);
        sa+=mp.size();
    }
    cout<<sa;cl;
}
int main(){

    int t;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        solve();
    }
}