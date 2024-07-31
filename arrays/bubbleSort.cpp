#include<bits/stdc++.h>
using namespace std;

int printarr(int arr[],int n){
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void Bubble_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        bool flag=0;

        for(int j=0;j<=n-2-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=1;
            }
        }
        if(flag==0)break;
    }
}
int main(){
    int n=5;
    int arr[n]={1,3,2,0,-1};
    cout<<"Before Sorting"<<endl;
    printarr(arr,n);
    cout<<endl;

    Bubble_sort(arr,n);
    cout<<endl;

cout<<"After Sorting"<<endl;
    printarr(arr,n);
    cout<<endl;
    



    return 0;
}
