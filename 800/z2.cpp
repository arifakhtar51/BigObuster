#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
void solve(){
     int n;
    cin>>n;
    int cnt2=0;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==2){
            cnt2++;
        }
    }
    if(cnt2&1){
        cout<<-1;cl
    }
    else{
        if(cnt2==0){
            cout<<1<<" ";cl;
                return ;
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]==2)
            cnt++;
            if(cnt==(cnt2/2)){
                // cout<<"yaha"<<cnt2<<" ";
                cout<<i+1<<"";cl;
                return ;
            }

        }
    }
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}