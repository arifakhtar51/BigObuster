    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    #define cl cout<<endl;
    #define cy cout<<"Yes"<<endl
    #define cn cout<<"No"<<endl
    #define vll vector<ll>
        #define vi vector<int>
    int lcm(int a,int b){
        return a*b/__gcd(a,b);
    }
    void solve(){
        ll a,b,c;
        cin>>a>>b>>c;
        int d1=b-a;
        int d2=c-b;
        if(d1==d2){
            cy;
            return ;
        }
        if( (  (2*b-a>0) && (2*b-a)%c==0 ) || ( (2*b-c>0)&& (2*b-c)%a==0) ||( (c+a)%(2*b)==0 && ((c+a)>0)) ){
            cy;
            return ;
        }
        cn;
        // int k=1;
        // while(k<100){
        //     if(c+a==(b+1)*k){
        //         cy;return ;
        //     }
        //     k++;
        // }
        // k=1;
        // while(k<=100){
        //     if(c==(2*b)-a*k){
        //         cy;return ;
        //     }
        //     k++;
        // }
        // k=1;
        // while(k<100){
        //     if(2*b-a==c*k){
        //         cy;return ;
        //     }
        //     k++;
        // }
        // cn;

        
        
        
    }
    int main(){

        int t;
        cin>>t;
        while(t--){
            solve();
        }
    }