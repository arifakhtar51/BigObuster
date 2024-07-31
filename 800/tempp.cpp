// CPP program to illustrate 
// std :: lower_bound 
#include <bits/stdc++.h> 
#include<bits/stdc++.h>
#define ll long long
using namespace std;

#include<vector>
#include<queue>

// Driver code 
int main() 
{ 
	vector<int>ar={1,2,6,4,3,1,0};
    priority_queue<int>minHeap;
    // priority_queue<int,vector<int>,greater<int>>MaxHeap;
    for(auto i:ar){
        minHeap.push(i);
        
    }
    cout<<"MinHeap"<<endl;
    int cnt=1;
    while(!minHeap.empty()){
        cout<<minHeap.top()<<" ";
        minHeap.pop();
        
        
    }
    for(auto i:ar){
        minHeap.push(i);
    
    }
    while(cnt){
        int ele;
        cin>>ele;
        minHeap.push(ele);
        cout<<"Top element at priority queue-> "<<minHeap.top()<<endl;
    }
	return 0; 
} 
