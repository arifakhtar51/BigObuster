// // #include<bits/stdc++.h>
// // #define ll long long
// // using namespace std;
// // // #define cl cout<<endl;
// // // #define cy cout<<"Yes"<<endl;
// // // #define cn cout<<"No"<<endl;
// // // #define vll vector<ll>
// // // int lcm(int a,int b){
// // //     return a*b/__gcd(a,b);
// // // }
// // // void solve(){
// // //     //  x given arr , query_values
// // //     int n=arr.size();
// // //     unordered_map<int,int>mp;
// // //     for(auto i:arr)mp[i]++;
// // //     vector<int>ans;
// // //     for(auto i:query_values){
// // //         if(mp[X]>=i){
// // //             int cnt=0;
// // //             for(int j=0;j<n;j++){
// // //                 if(arr[j]==X){
// // //                     cnt++;
// // //                 }
// // //                 if(cnt==i){
// // //                     ans.push_back(j);
// // //                     break;
// // //                 }
// // //             }
// // //         }
// // //         else{
// // //             ans.push_back(-1);
// // //         }
// // //     }
// // //     return ans;
// // // }
// // int main(){

// //     string s;
// //     s="rdsfasdaaaifaa";

// //     char ch='a';
// //             // auto j=find_first_of(s.begin(), s.end(), ch);
// //     auto j=s.find_first_of(ch);
// //     cout<<j<<endl;
// // }
//     #include<bits/stdc++.h>
//     #define ll long long
//     using namespace std;
//     #define cl cout<<endl;
//     #define cy cout<<"YES"<<endl;
//     #define cn cout<<"NO"<<endl;
//     #define vll vector<ll>
//     #define sort(x) sort(begin(x),end(x))
//     #define vi vector<int>
//     // class Node{
//     //     int data;
//     //     Node* next;
//     //     public:
//     //     Node(int data){
//     //         // this.data=data;
//     //         // this->next=NULL;

//     //     }

//     // };
//     int lcm(int a,int b){
//         return a*b/__gcd(a,b);
//     }
//     void solve(){
//         ll x,y,z;
//         cin>>x>>y>>z;
//         int total=x+y+z;
//         unordered_map<int,int>mp;
//         for(int i=0;i<total;i++){
//             int ele;
//             cin>>ele;
//             mp[ele]++;
           
//         }
//         vector<int>ans;
//         for(auto i:mp){
//             if(i.second>=2){
//                 ans.push_back(i.first);
//             }
//         }
//         sort(ans);
//         cout<<ans.size();cl;
//         for(auto i:ans){
//             cout<<i<<endl;
//         }
//     }
//     int main(){

       
//         solve();
        
//     }