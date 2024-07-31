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
#define pll pair<ll,ll>

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
    ll n;
    cin>>n;
    vector<ll>arr(n);
    unordered_map<ll,ll>mp;
    priority_queue<pll>pq;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]=i;
        pq.push({arr[i],i});
    }
    vector<ll>temp=arr;
    srt(temp);rev(temp);
    ll ans=0,cnt=0;
    for(ll i=0;i<n;i++){
        if(cnt%2==0){
            ans+=(2*(cnt+1))*temp[i];
            if(i+1<n){
                ans+=(2*(cnt+1))*temp[i+1];
                i++;
            }else break;
            cnt++;
        }
        else {
            ans+=(2*(cnt+1))*temp[i];
            if(i+1<n){
                ans+=(2*(cnt+1))*temp[i+1];
                i++;
            }else break;
            cnt++;

        }
    }
    vector<int>temp2(n+1);
    temp[0]=0;
    ll x=-1,y=1;
    for(int i=1;i<=n;i++){
        if(i%4==1){
            temp2[i]=y;
            y++;
        }
        else if(i%4==2){
            temp2[i]=x;x--;
        }
        else if(i%4==3){
            temp2[i]=y;
            y++;
        }
        else {
            temp2[i]=x;x--;
        }
    }
    // cl;
    // printarr(temp2);cl;
    vector<ll>finalAns(n+1);
    finalAns[0]=0;
    ll j=1;
    while(!pq.empty()){
        ll ele=pq.top().first;
        ll index=pq.top().second;
        finalAns[index+1]=temp2[j++];
        pq.pop();
    }cout<<ans;cl;
    printarr(finalAns);cl;
    

}
int main(){

    int t;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        solve();
    }
}