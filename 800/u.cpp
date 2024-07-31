#include<bits/stdc++.h>
#define ll long long
using namespace std;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
void solve(){
     int n,sm=0,odd=0; 
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sm+=arr[i];
        if((arr[i])==-1)odd++;
    }
    if(sm>=0){
        if(odd&1){
            cout<<1<<endl;
            return ;
        }
        cout<<0<<endl; 
    }
    else{
        // cout<<"odd->"<<odd<<" ";
        int steps=0;
        if(odd&1){
            steps=1;
            // even ban gya
            sm+=2;
            // now check sm>=0 or not
            if(sm>=0){
                cout<<steps<<endl;//1
            } 
            else {
                // make  it 0 in even steps
                while(sm<0){
                    steps+=2;sm+=4;
                }
                cout<<steps<<endl;

            }
        }
        else{
            int steps=0;
            while(sm<0){
                sm+=4;
                steps+=2;
            }
            cout<<steps<<endl;

        }
        
    
        
    }
}
int main(){
    int t;
    cin>>t;
    int cnt=0;
    while(t--){
        // cout<<"TESCASE "<<cnt<<endl;
        cnt++;
        solve();
    }
}