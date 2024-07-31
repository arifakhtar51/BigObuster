    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    #define cl cout<<endl;
    #define cy cout<<"YES"<<endl;
    #define cn cout<<"NO"<<endl;
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
        ll n;
        cin>>n;
        if(n==1){
            cout<<0;cl;
            return ;
        }
        if(n%3!=0 && n%6!=0 ){
            cout<<-1<<" "<<endl;return ;
        }
        int oprn=0;
        while(n>1){
            if(n%6==0){
                n/=6;
            }
            else{
                n*=2;
                if(n%6!=0){
                    cout<<"-1"<<endl;
                    return ;
                }

            }oprn++;
        }
        cout<<oprn<<" "<<endl;


    }
    int main(){

        int t;
        cin>>t;
        while(t--){
            solve();
        }
    }