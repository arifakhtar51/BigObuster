#include<iostream>//second largest
using namespace std;
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
int missingK(vector < int > arr, int n, int k) {
    // Write your code here.
    int d=arr[0]-1;
	cout<<"k= "<<k;cl;
     k-=d;
	 cout<<"k= "<<k;cl;
	cout<<"d= "<<d;
	cl;
    if(k<=0)return 1;
    for(int i=1;i<n;i++){
        // if(k==0)break;
        int diff=arr[i]-arr[i-1]-1;
        
        if(k>diff){
            // cout<<"Yaha diff="<<diff<<endl;
			// cout<<"k= "<<k;cl;
            k-=diff;
			cout<<"after k= "<<k;cl;

        }
        else {
            // apply Binary search
            // a=arr[i-1] and l=a[i]  
            // ak=a+(k-1)*1 common diff=1
            return (arr[i-1]+1+(k-1));

        }
	}
        // cout<<k<<" ";
        return  (arr[n-1]+1+(k-1));
    }

int main()
{
		vector<int>arr={2,3,4,5,6,7,8,10};
		cout<<missingK(arr,8,3);
}