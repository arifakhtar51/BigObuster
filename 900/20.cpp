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
bool isvalid(string str){
    int ab=0;
    int ba=0;
    int n=str.size();

    for(int i=0;i<n-1;i++){
        string s=str.substr(i,2);
        if(s=="ab")ab++;
        if(s=="ba")ba++;
    }
    if(ab==ba){
        return 1;
    }
    return 0;
}
void solve(){
    string str;
    cin>>str;
    if(str[0]==str[str.size()-1]){
        cout<<str;cl;
    }
    else{
        cout<<str.substr(0,str.size()-1)<<str[0]<<" ";
    }
    // int ab=0;
    // int ba=0;
    // int n=str.size();

    // for(int i=0;i<n-1;i++){
    //     string s=str.substr(i,2);
    //     if(s=="ab")ab++;
    //     if(s=="ba")ba++;
    // }
    // if(ab==ba){
    //     cout<<str;cl;return ;
    // }
    // cout<<ab<<" "<<ba;cl;
    // cout<<"ans"<<" ";cl;
    // if(ab>ba){
    //     // now check 2 condition 
    //     //  ab-- or ba++;
    //     int diff=ab-ba;
    //     // convert ab to bb; or ab to aa
    //     for(int i=1;i<n;i++){
    //         if(diff==0){
    //             break;
    //         }
    //         string s=str.substr(i-1,2);
    //         if(s=="ab"){
    //             string temp=str;
    //             str[i-1]='b';
    //             bool ans=isvalid(str);
    //             if(ans==1){
    //                 diff--;
    //             }
    //             else {
    //                 str=temp;
    //                 str[i]='a';
    //                 bool ans2=isvalid(str);
    //                 if(ans2==1){
                        
    //                     diff--;
    //                 }
    //                 else {
    //                     str=temp;
    //                 }
    //             }
                
            
                    
                
    //         }
            
    //     }
    //     cout<<str;cl;

    // }
    // else {
    //     int diff=abs(ab-ba);
    //     // convert ab to bb;
    //     for(int i=1;i<n;i++){
    //         if(diff==0){
    //             break;
    //         }
    //         string s=str.substr(i-1,2);
    //         if(s=="ba"){
    //             string temp=str;
    //             str[i-1]='a';
    //             bool ans=isvalid(str);
    //             if(ans==1){
    //                 diff--;
    //             }
    //             else {
    //                 str=temp;
    //                 str[i]='b';
    //                 bool ans2=isvalid(str);
    //                 if(ans2==1){
                        
    //                     diff--;
    //                 }
    //                 else {
    //                     str=temp;
    //                 }
    //             }
                
    //         }
        
    //     }
    //     cout<<str;cl;
    // }
}
int main(){

    int t;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        solve();
    }
}