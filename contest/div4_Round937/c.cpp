#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;
string solve(string ans) {
    stringstream cn(ans);
    int hr, mint;
    char colon;
    cn>>hr>>colon>>mint;
    string pr = (hr < 12)?"AM":"PM";
    if (hr == 0) {
        hr = 12;
    } else if (hr >12) {
        hr -= 12;
    }
    stringstream Fianlans;
    Fianlans <<setw(2)<<setfill('0') << hr << ":" << setw(2) << setfill('0') << mint << " " << pr;


    return Fianlans.str();
}

int main() {
    int t;
    cin >> t;
    for (int i=0; i<t;i++) {
        string ans;
        cin>>ans;
        cout << solve(ans) << endl;
    }

    return 0;
}
