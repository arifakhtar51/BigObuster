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
char ch='@';
bool Check(char c ,vector<ll>&arr){
    int j=c-'a'-1;
    // cout<<"yaha j= "<<j;cl;
    while(j>=0){
        if(arr[j]>=1){
            ch=j+'a';
            // cout<<"yaha char= "<<ch;cl;
            
            return 1;}
            j--;
    }
    return 0;
}
void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(27,0);
    ch='@';
    string str;
    cin>>str;
    for(auto c:str){
        arr[c-'a']++;
    }
    // arr[str[0]-'a']--;
    for(int i=0;i<n;i++){
        
        arr[str[i]-'a']--;
        if(str[i]=='a')continue;

        bool t=Check(str[i],arr);
        if(t){
            cy;
            // cout<<"yahaaaa-> ch="<<ch;cl;
            
            cout<<i+1<<" ";
            for(int k=i+1;k<n;k++){
                if(str[k]==ch){
                    cout<<k+1<<" ";
                    cl;
                    return ;
                }
            }
            return ;
        }

        
    }
cn;


}
int main(){

    int t;
    // cout<<string(3,'1');
    // cin>>t;
    t=1;
    while(t--){
        solve();
    }
}