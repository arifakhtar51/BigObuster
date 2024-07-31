#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cl cout<<endl;
#define cy cout<<"Yes"<<endl;
#define cn cout<<"No"<<endl;
#define vll vector<ll>
#define vi vector<int>
void solve(){
    int n,k; cin>>n>>k;
    int l=1, r=n;
    vi ret(n);
    for(int i=0; i<k; i++) {
        for(int j=i; j<n; j+=k) {
            if(i&1) ret[j]=l++;
            else ret[j]=r--;
        }
    }
    for(int i=0; i<n; i++) {
        cout<<ret[i]<<' ';
    }
    cout<<endl;
}
int main(){
    int mat2[3][3]={0,1,1,1,1,1,1,1,1};
    int n=3,m=3;
    cout<<"Printing array";cl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat2[i][j]<<" ";
        }
        cl;
    }
    cl;cl;
    int a[4]={1,0,0,-1};
    int b[4]={0,1,-1,0};
    for(int x=0;x<n;x++){
        for(int y=0;y<m;y++){
            if(mat2[x][y]==0){//landmines
                for(int i=0;i<4;i++){
                    int newX=x+a[i];
                    int newY=y+b[i];
                    if((newX>=0 && newX<n)&& (newY<m && newY>=0) ){
                        mat2[newX][newY]=2;
                    }
                }
            }
        }
    }
    cout<<"Printing array";cl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat2[i][j]<<" ";
        }
        cl;
    }


    int i=9;
    cl;
    cout<<i/2;
    cl;
    cout<<(float)i/2;
    

}
