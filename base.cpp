//if array is sorted then think about binary search

#include <bits/stdc++.h>
using namespace std;


int binarySearch(int arr[],int n,int ele){
    
    int start=0;
    int end=n-1;
    int mid;

    while(start<=end){

        mid=start+(end-start)/2;

        if(ele == arr[mid]){
            return mid;
        }
        else if(ele < arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    
    
    int n,ele;
    cin>>n>>ele;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    cout<<binarySearch(arr,n,ele);

    
        
return 0;
}

//ip : 10 3
//     1 2 3 4 5 6 7 8 9 10
//op : 2  (index)     
