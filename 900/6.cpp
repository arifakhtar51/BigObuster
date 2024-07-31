#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
#define cy cout<<"Yes"<<endl;
#define cn cout<<"No"<<endl;
#define vll vector<ll>
ll  lcm(ll  a,ll  b){
    return a*b/__gcd(a,b);
}
void SieveOfEratosthenes(ll  n,vector<ll>&prime)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    
    
 
    for (ll  p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (ll  i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    // Prll  all prime numbers
    for (ll  p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}

void solve(){
     ll  n;
    cin>>n;
    // vector<ll>prime(n+1,0);
    // SieveOfEratosthenes(n,prime);
    ll maxi=0;
    ll cnt=0;
    for(int i=1;i<=50;i++){
        if(n%i==0){
            cnt++;
            maxi=max(cnt,maxi);
        }
        else cnt=0;
    }
    cout<<maxi<<" ";cl
}
int  main(){

    ll  t;
    cin>>t;
    while(t--){
        solve();
    }
}

