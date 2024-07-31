#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define cyr cout<<"YES"<<endl; return ;
#define cnr cout<<"NO"<<endl; return ;
#define vll vector<ll>
#define sort(x) srt(begin(x),end(x))
#define vi vector<int>
#define rev(x) reverse(begin(x),end(x))
#define printarr(arr) for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
#define sortr(x) sort(rbegin(x),rend(x))
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
bool checka(int n){
    bool flag=0;
    ll t=n;
    while(t){
        if(t%10>1){
            flag=1;
            break;
        }
        t/=10;
    }
    if(flag==1){
        return 1;
    }
    return 0;
}
void solve(){
    int n;
    cin>>n;
    vector<ll>arr ={1,10,11,100,101,110,111,121,1000,1001,1010,1011,1100,1101,1110,1111,1210,1221,1331,10000,10001,10010,10011,10100,10101,10110,10111,10201,11000,11001,11010,11011,11100,11101,11110,11111,11121,11211,12100,12111,12210,12221,12321,13310,13431,14641,100000};
    unordered_map<ll,bool> umap;
    for (auto i:arr) {
        umap[i] = 1;
    }
    if(umap[n]==1){
        cy;
    }
    else {
        cn;
    }
 

    // bool flag=0;
    // ll t=n;
    // while(t){
    //     if(t%10>1){
    //         flag=1;
    //         break;
    //     }
    //     t/=10;
    // }
    // if(flag==0){
    //     cy;return ;
    // }
    // t=n;
    // while(t%11==0){
    //     t/=11;
    // }
    // ll newt=t;
    // if(t==1){
    //     cy;return ;
    // }
    // flag=0;
    // while(t){
    //     if(t%10>1){
    //         flag=1;
    //         break;
    //     }
    //     t/=10;
    // }
    // if(flag==0){
    //     cy;return ;
    // }
    // vector<ll>fact;
    // t=newt;
    // for(ll i=2;i<=t/2;i++){
    //     if(t%2==0){
    //         if(check(i)){
    //             cout<<"No";cl;
    //             return ;
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