#include<bits/stdc++.h>
using namespace std;
int fun(int a,int b,int c){
    int cnt=0;
    while(a>=0 && c>=0){
        a--;
        b+=2;
        cnt++;
        c--;
        if(a==c){
            return cnt+a;
        }
        if(a==b){
            return cnt+a;
        }
        if(b==c){
            return cnt+b;
        }

    }
     return -1;
}
int solve(int a, int b, int c) {
    vector<int>arr;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    sort(begin(arr),end(arr));
    if(arr[0]==arr[1])return arr[0];
    if(arr[1]==arr[2])return arr[1];
    int cnt=0;
    a=arr[0],b=arr[1],c=arr[2];
    int ans=fun(a,b,c);
    if(ans!=-1)return ans;

    int ans2=fun(b,a,c);
    if(ans2!=-1)return ans2;

    int ans3=fun(a,c,b);
    if(ans3!=-1)return ans3;

    int ans4=fun(c,b,a);
    if(ans4!=-1)return ans4;

    int ans5=fun(c,a,b);
    if(ans4!=-1)return ans4;

    int ans6=fun(b,c,a);
    if(ans6!=-1)return ans6;

    return -1;
    
    
}

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<solve(a,b,c);


    return 0;
}
