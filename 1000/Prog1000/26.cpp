#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define cyr cout<<"YES"<<endl; return ;
#define cnr cout<<"NO"<<endl; return ;
#define vll vector<ll>
#define srt(x) sort(begin(x),end(x))
#define vi vector<int>
#define rev(x) reverse(begin(x),end(x))
#define printarr(arr) for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
#define sortr(x) sort(rbegin(x),rend(x))
#define vpll vector<pair<ll,ll>>

bool static  mycomp(pair<ll,ll>p1,pair<ll,ll>p2){
    if(p1.first==p2.first){
        return p1.second>p2.second;
    }
    else {
        return p1.first<p2.first;
    }
}
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

/* ===============BoilerPlate code end=========== */
/*====================You can Do it man!!====================*/
/*=================Think a bit more=============*/
// author -arifakhtar
// double solveQuadratic(double d, double a, double sm) {
//     // Calculate the discriminant
//     double discriminant = pow(d, 2) - 4 * (d * sm * 2);

//     // Check if the discriminant is negative, if so, no real roots exist
//     if (discriminant < 0) {
//         cout << "No real roots exist for the given equation." << endl;
//         return 0;
//     }

//     // Calculate the roots
//     double root1 = (-d + sqrt(discriminant)) / (2 * d);
//     double root2 = (-d - sqrt(discriminant)) / (2 * d);

//     // Choose the root that satisfies the equation
//     double n;
//     if (root1 >= 0 && root1 * d + d - 2 * a * root1 + sm * 2 == 0)
//         n = root1;
//     else
//         n = root2;

//     return n;
// }


void solve(){
    ll x,y,k;
    cin>>x>>y>>k;
    ll d=x-1;
    ll a=x;
    
    ll totalSticksRequired=k+y*k;
    // cout<<"a="<<x<<" d="<<d<<" totalStics= "<<totalSticksRequired<<" ";
    ll ans=k;
    ll n=(((totalSticksRequired-a)/d))-1;
    ll an=a+(n-1)*d;
    if(an<totalSticksRequired){
        ll an=a+(n-1)*d;
        while(an<totalSticksRequired){
            n++;
            an=a+(n-1)*d;
        }
    }
    cout<<ans+n;
cl;
}
int main(){

    int t;
    // cout<<string(3,'1');
    cin>>t;
    while(t--){
        solve();
    }
}