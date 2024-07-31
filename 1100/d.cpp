#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
        int n, m;
        cin >> n >> m;
        
        string prob;
        cin >> prob;
        
        vector<int> count(7, 0);         
        for (char c : prob) {
            count[c - 'A']++;         }
        
        int ans = 0;
        
        for (int i = 0; i < 7; i++) {
            if (count[i] < m) {
                ans = ans + m - count[i];
            }
        }
        cout<<ans<<endl;
 }
    
        
return 0;
}