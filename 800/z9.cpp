#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cy cout<<"Yes"<<endl;
#define cn cout<<"No"<<endl;
#define cl cout<<endl;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
void solve(){
    int n,k,x;
    cin>>n>>k>>x;
    if(x!=1){
        cy
        cout<<n;cl
        for(int i=1;i<=n;i++){
            cout<<1<<" ";
        }
        cl
    }
    else{
        int odd=0,even=0;
        vector<int>temp;
        for(int i=1;i<=k;i++){
            if(i!=x){
                temp.push_back(i);
                if(i&1)odd++;
                else even++;
            }

        }
        if(temp.size()==0)cn
        else{
            if(n&1){
                if(odd==0)cn
                else {
                    cy
                    int sze=n/2;
                    
                    cout<<sze;cl
                    for(int i=0;i<sze-1;i++){
                        cout<<2<<" ";
                    }                
                    cout<<3;cl    

                }
            }
            else{
                cy
                    int sze=n/2;
                    
                    cout<<sze;cl
                    for(int i=0;i<sze;i++){
                        cout<<2<<" ";
                    }                
                    // cout<<3;cl   
                    cl

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