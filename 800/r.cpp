#include<bits/stdc++.h>
#define ll long long
using namespace std;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
vector<int>Ans;
bool flag=0;
void CanZero(int n,int start,vector<int>&arr,vector<int>&ans){
    if(n<0)return ;
    if(n==0){Ans=ans;flag=1;return ;}
    for(int i=start;i<arr.size();i++){
        ans.push_back(arr[i]);
        CanZero(n-arr[i],start+1,arr,ans);
        ans.pop_back();
    }


}
void solve(){
     int n,k,x;
    cin>>n>>k>>x;
    if(x!=1){
        cout<<"Yes"<<endl;
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<1<<" ";
        }
        cout<<endl;
        return ;
    }
    else {

            // x==1
            if(k==1){
                cout<<"No"<<endl;
                    return ;
            }
            if(k==2){
                if(n&1){
                    cout<<"No"<<endl;
                    return ;
                }
                else{
                    cout<<"Yes"<<endl;
                    cout<<n/2<<endl;
                    for(int i=0;i<n/2;i++){
                        cout<<2<<" ";
                    }
                    cout<<endl;
                }

            }
            else {
               if(n&1){
                if(n==k){
                    cout<<"Yes"<<endl;
                    cout<<1<<endl;
                    cout<<k<<endl;
                }
                cout<<"Yes"<<endl;
                cout<<n/2+1<<endl;
                cout<<n-3<<" ";
                n=n-3;
                for(int i=0;i<n/2;i++){
                    cout<<n/2<<" ";
                }
                cout<<endl;

               }
               else {
                    cout<<"Yes"<<endl;
                    cout<<n/2<<endl;
                    for(int i=0;i<n/2;i++){
                        cout<<2<<" ";
                    }
                    cout<<endl;
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



//  int odd=0,oddEle=INT_MAX;
//         int even=0,evenEle=INT_MAX;
//         for(int i=2;i<=k;i++){
//             if(i&1){odd++;oddEle=min(i,oddEle);}
//             else {even++;evenEle=min(i,evenEle);}
//         }
//         if(n&1){
//             if(odd>=1 && even>=1){
                
//             }
//             else {
//                 cout<<"No"<<endl;
//                 return ;
//             }
//         }
//         else{
//             if(odd>=2 || even>=1){
//                 // can ans
//                 if(even>=1){
//                     cout<<"Yes"<<endl;
//                     cout<<n/evenEle<<endl;
//                     for(int i=0;i<n/evenEle;i++){
//                         cout<<evenEle<<" ";
//                     }
//                     cout<<endl;

//                 }
//                 else {
                    
//                 }
//             }
//             else {
//                 cout<<"No"<<endl;
//                 return ;
//             }
//         }