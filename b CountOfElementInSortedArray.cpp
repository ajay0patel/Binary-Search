//find 1st and last occurrence of element and return lastid-firstid+1

#include <bits/stdc++.h>
using namespace std;


int binarySearch(int arr[],int n,int ele){
    
    int start=0;
    int end=n-1;
    int mid;
    int firstid=-1;

    while(start<=end){

        mid=start+(end-start)/2;

        if(ele == arr[mid]){
            firstid=mid;
            end=mid-1;
        }
        else if(ele < arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    
    start=0;
    end=n-1;
    int lastid=-1;
    while(start<=end){

        mid=start+(end-start)/2;

        if(ele == arr[mid]){
            lastid=mid;
            start=mid+1;
        }
        else if(ele < arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }

   if(firstid==-1 && lastid==-1){
       return -1;
   }

    return lastid-firstid+1;

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


/*
ip : 10 20
     2 4 10 10 10 18 20 20 20 20
op : 4

*/
