#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            if(i!=2){
                cout<<i<<" "<<i<<endl;
            }

        }
        cout<<1<<" "<<2<<endl;
        cout<<endl<<endl;
    }

    return 0;
}
