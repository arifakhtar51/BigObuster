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
void solve(){
     int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<0;cl;
        return;
    }
    sort(begin(arr),end(arr));

    int mn=n;
    int j=0;
    int sm=0;
    int cnt=0;
    vector<int>temp;
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]>k){
            // sahi hai 
            mn=min(mn,i-j);
            temp.push_back(i-j);
            j=i;
            cnt++;
            if(i==n-1){
                temp.push_back(1);
                break;
            }
        }
        if(i==n-1){
                temp.push_back(i-j+1);
        }
    }
    if(cnt==0){
        cout<<0;cl
        return ;
    }
    int m=temp.size();
    if(m==0){
        cout<<0;cl
    }
    if(m==1){
        
        cout<<temp[0];cl
    }
    else if(m==2){
        cout<<min(temp[0],temp[1]);cl
    }
    else{
        sort(temp.begin(),temp.end());
        // sm=accumulate(temp.begin(),temp.begin()+m-1,0);
        for(int i=0;i<m-1;i++){
            sm+=temp[i];
        }

        cout<<sm<<endl;
        
    }

    
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}