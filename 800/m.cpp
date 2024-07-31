#include<bits/stdc++.h>
#define ll long long
using namespace std;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    set<int>st;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        st.insert(arr[i]);
    }
    if(st.size()==1){
        cout<<-1<<endl;
       
    }
    else{
        sort(begin(arr),end(arr));
        // cout<<n-1<<" "<<1<<endl;
        int len=n-1;
        while(len-1>=0&&arr[len]==arr[len-1]){
            len--;
        }
        cout<<len<<" "<<n-len<<endl;
        int i=len-1;
        while(i>=0){
            cout<<arr[i]<<" ";
            i--;
        }
        cout<<endl;
        while(len<n){
            cout<<arr[len]<<" ";len++;

        }
        cout<<endl;
        
    }
    

}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}