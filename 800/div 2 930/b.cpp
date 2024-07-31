#include<bits/stdc++.h>
#define ll long long
using namespace std;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
string ans="";
void findPath(vector<string>&arr,int i,int j,string Bhaibhai,int m){
    if(i==1 && j==m-1){
        ans=Bhaibhai;
        return ;
    }
    if(i>2|| j>=m){cout<<ans<<" ";return ;}
    // down and right

    Bhaibhai.push_back(arr[i][j]);
    ans=Bhaibhai;
    // cout<<Bhaibhai<<" ";
   
         if(arr[i+1][j]='0' ){
            findPath(arr,i+1,j,Bhaibhai,m);
        }
       
   
        findPath(arr,i,j+1,Bhaibhai,m);
    

}
void solve(){
    // int len ;
    // cin >> len ;
    // string str1 , str2 ;
    // cin >> str1  >> str2 ;
    int n=2,m;
    cin>>m;
    vector<string>arr;
    for(int i=0;i<2;i++){
        string Bhaibhai;
        cin>>Bhaibhai;
        arr.push_back(Bhaibhai);
    }
    // vector<vector<int>>array(2,vector<int>(m,0));
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<m;j++){
    //         if(arr[i][j]=='1'){
    //             array[i][j]=1;
    //         }
    //     }n
    // }
    string ans="";
    

     int i=0,j=0;
     int cnt=0;
     int maxi=0;
        for(int j=0;j<m-1;j++){
            if(arr[1][j]==arr[0][j+1]){
                cnt++;
                maxi=max(cnt,maxi);
            }
            else cnt=0;

        
     }
     cnt=maxi;
     
     while(j<m){
        // cout<<ans<<" "<<endl;
        ans.push_back(arr[i][j]);
        if(i==1 && j>=m-1){
            if(cnt==0)cnt++;
            if(cnt==1 && m!=2)
            cout<<cnt<<endl;
            else cout<<cnt+1<<endl;
            
            cout<<ans<<" "<<endl;
            return ;
        }
        if(j<m-1 && i<1 && arr[i][j+1]=='1' && arr[i+1][j]=='1'){
            j++;
            
        }
         else if(j<m-1  && i<1&&arr[i][j+1]=='0' && arr[i+1][j]=='1'){
            j++;
        }
         else if(j<m-1 && i<1 && arr[i][j+1]=='1' &&  arr[i+1][j]=='0') {
            i++; 

        }
        else if (j<m-1  && i<1 &&arr[i][j+1]=='0' &&  arr[i+1][j]=='0'){
            j++;
           
        }
        else {
            if(i>=1)j++;
            else 
            i++;
        }
     }

    
    // findPath(array,0,0,"",m);
    cout<<ans<<"Ye hai "<<endl;
     

 
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}