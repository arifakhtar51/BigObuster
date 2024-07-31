#include<bits/stdc++.h>
using namespace std;

int printarr(int arr[],int n){
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void selection_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int mn=arr[i], ind=i;
        for(int j=i;j<n;j++){
            if(arr[j]<mn){
                mn=arr[j];
                ind=j;
            }
        }
        swap(arr[i],arr[ind]);
    }
}
int main(){
    int n=5;
    int arr[n]={1,3,2,0,-1};
    cout<<"Before Sorting"<<endl;
    printarr(arr,n);
    cout<<endl;

    selection_sort(arr,n);
    cout<<endl;

cout<<"After Sorting"<<endl;
    printarr(arr,n);
    cout<<endl;
    



    return 0;
}
