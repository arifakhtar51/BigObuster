    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    #define cl cout<<endl;
    #define cy cout<<"DA"<<endl;
    #define cn cout<<"NET"<<endl;
    #define vll vector<ll>
    #define sort(x) sort(begin(x),end(x))
    #define vi vector<int>
    // class Node{
    //     int data;
    //     Node* next;
    //     public:
    //     Node(int data){
    //         // this.data=data;
    //         // this->next=NULL;

    //     }

    // };
    int lcm(int a,int b){
        return a*b/__gcd(a,b);
    }
    void solve(){
        string s;
        cin>>s;
        
        if(s.size()<=1){
            cn;
            return ;
        }
        int cnt0=0;
        int cnt1=0;
        
        for(auto ch:s){
            if(ch=='0')cnt0++;
            else cnt1++;
        }
        if(cnt0==s.size()|| cnt1==s.size()){
            cn;
            return ;
        }
        int n=min(cnt0,cnt1);
        if(n&1){
            cy;
        }
        else {
            cn;
        }

        
        
        
    }
    int main(){

        int t;
        cin>>t;
        while(t--){
            solve();
        }
    }