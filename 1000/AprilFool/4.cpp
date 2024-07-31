#include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// #define cl cout<<endl;
// #define cy cout<<"YES"<<endl;
// #define cn cout<<"NO"<<endl;
// #define cyr cout<<"YES"<<endl; return ;
// #define cnr cout<<"NO"<<endl; return ;
// #define vll vector<ll>
// #define srt(x) sort(begin(x),end(x))
// #define vi vector<int>
// #define rev(x) reverse(begin(x),end(x))
// #define printarr(arr) for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
// #define sortr(x) sort(rbegin(x),rend(x))
// void FindPrime(){
//     vector<bool>Prime(3001,1);
//     Prime[0]=0;
//     Prime[1]=0;
//     for(int i=2;i*i<=3000;i++){
//         int j=i*i;
//         while(j<=3000){
//             Prime[j]=0;
//             j+=i;
//         }
//     }
// }
// int sumOfDigit(int n){
//     int sm=0;
//     while(n){
//         sm+=n%10;
//         n/=10;
//     }
//     return sm;
// }
// int lcm(int a,int b){
//     return a*b/__gcd(a,b);
// }

// /* ===============BoilerPlate code end=========== */
// /*====================You can Do it man!!====================*/
// /*=================Think a bit more=============*/
// // author -arifakhtar


// void solve(){
//     ll n;
//     cin>>n;
//     vector<ll>arr(n);
//     for(ll i=0;i<n;i++){
//         cin>>arr[i];
//     }
// }
// int maxSumSubmatrix(vector<vector<int>>& matrix) {
//     int maxSum = INT_MIN;
//     int rows = matrix.size();
//     int cols = matrix[0].size();
    
//     for (int i = 0; i <= rows - 4; ++i) {
//         for (int j = 0; j <= cols - 4; ++j) {
//             int sum = 0;
//             for (int k = i; k < i + 4; ++k) {
//                 for (int l = j; l < j + 4; ++l) {
//                     sum += matrix[k][l];
//                 }
//             }
//             maxSum = max(maxSum, sum);
//         }
//     }
    
//     return maxSum;
// }
// int main(){

//     int t;
//     // cout<<string(3,'1');
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     vector<vector<int>> str;
//     cout<<maxSumSubmatrix(str);
// }
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int maxSumSubmatrix(vector<vector<int>>& matrix) {
    int maxSum = INT_MIN;
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    for (int i = 0; i <= rows - 4; ++i) {
        for (int j = 0; j <= cols - 4; ++j) {
            int sum = 0;
            for (int k = i; k < i + 4; ++k) {
                for (int l = j; l < j + 4; ++l) {
                    sum += matrix[k][l];
                }
            }
            maxSum = max(maxSum, sum);
        }
    }
    
    return maxSum;
}

int main() {
    vector<vector<int>> matrix;
    string line;
    
    // Take input for each row
    for (int i = 0; i < 21; ++i) {
        getline(cin, line);
        istringstream iss(line);
        vector<int> row;
        char c;
        while (iss >> c) {
            row.push_back(c - '0'); // Convert char to int
        }
        matrix.push_back(row);
    }

    int maxSum = maxSumSubmatrix(matrix);
    cout << maxSum << endl;

    return 0;
}
