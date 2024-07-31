#include <iostream>
#include <vector>

using namespace std;

void rotateMatrix180(vector<vector<int>>& matrix) {
    int n = matrix.size();

    // Rotate the matrix by 180 degrees
    for(int i = 0; i < n / 2; ++i) {
        for(int j = 0; j < n; ++j) {
            // Swap elements [i][j] with [n-i-1][n-j-1]
            swap(matrix[i][j], matrix[n-i-1][n-j-1]);
        }
    }

    // If the matrix has an odd size, reverse the middle row and column
    if (n % 2 == 1) {
        int mid = n / 2;
        // Reverse the middle row
        for (int j = 0; j < n / 2; ++j) {
            swap(matrix[mid][j], matrix[mid][n-j-1]);
        }
        // Reverse the middle column
        for (int i = 0; i < n / 2; ++i) {
            swap(matrix[i][mid], matrix[n-i-1][mid]);
        }
    }
}



int main() {
    int t;
    cin>>t;
    int cnt=1;
    while(t--){
        int n,k;
        cin>>n>>k;
            vector<vector<int>> matrix;
            for(int i=0;i<n;i++){
                vector<int>temp;
                for(int j=0;j<n;j++){
                    int a;
                    cin>>a;
                    temp.push_back(a);
                }
                matrix.push_back(temp);
            }
            // cout<<"ye->"<<cnt++<<endl;
        // vector<vector<int>> mat=matrix;
        int cnt=0;
            // rotateMatrix180(matrix);
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(matrix[i][j]!=matrix[n-i-1][n-j-1])cnt++;
                }
            }
            cnt/=2;
            if(n==1){
                
                cout<<"Yes";
            }

            else if(cnt<=k){
                // cout<<cnt<<" "<<endl;
                int r=k-cnt;
                if(r%2!=0 && n%2==0)
                   cout<<"No";
                else{
                    cout<<"Yes";
                }
            }
            else {
                cout<<"No";
            }
            cout<<endl;


    }

    

    return 0;
}
