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

void solve(){
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    // if(n==1){
    //     if()
    // }
    int i=0;
    ll first=k*b;
    if(first+k-1<=s){
        first+=k-1;
    }
    ll left=s-first;
    if(s==0 && b==0){
        for(int i=0;i<n;i++)cout<<0<<" ";
        cl;return ;
    }
    if(left>(n-1)*(k-1) || (left<0)||(s==0 && b!=0)){
        cout<<-1;cl;return ;
    }
    else {
        vll ar;
        // cout<<first<<" ";
        ar.push_back(first);
        ll cnt=1;
        while(cnt<=n){
            if(left>=k){
                // cout<<k-1<<" ";
                ar.push_back(k-1);
            }
            else {
                ar.push_back(left);
                // cout<<left <<" ";
                break;
            }
            left-=(k-1);
            cnt++;
        }
        ll j=ar.size();
        while(j<n){ar.push_back(0);j++;}
        // if(ar.size()>0)
        if(ar.size()>n){
            ll cnt=0;
            ll t=ar.size()-n;
            for(ll i=0;i<n;i++){
                if(ar[i]!=0){
                    cout<<ar[i]<<" ";
                }
                else {
                    if(cnt>=n){
                        cout<<ar[i]<<" ";
                    }
                    else cnt++;
                }
            }

        }
        else 
        printarr(ar);

    }
    cl;
    
    

}
int main(){

    int t;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        solve();
    }
}