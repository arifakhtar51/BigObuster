#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        int k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(k==1){
            vector<int>temp(begin(arr),end(arr));
            sort(begin(temp),end(temp));
            if(temp==arr){
                cout<<"Yes";
            }
            else {
                cout<<"NO";
            }
        }
        else {
            cout<<"YES";
        }
        cout<<endl;
    }
}