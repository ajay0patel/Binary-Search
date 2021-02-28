// link : https://leetcode.com/problems/search-in-rotated-sorted-array/


class Solution {
public:    
    int binarySearch(vector<int>& nums,int start,int end,int ele){

        int mid;

        while(start<=end){

            mid=start+(end-start)/2;

            if(ele == nums[mid]){
                return mid;
            }
            else if(ele < nums[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return -1;
    }

public:
    int searchMinId(vector<int>& nums, int n){


        int start=0;
        int end=n-1;
        int mid,next,pre;

        if(nums[start]<=nums[end]){
            return 0;
        }

        while(start<=end){

            if(nums[start]<=nums[end]){
                return start;
            }

            mid=start+(end-start)/2;
            next=(mid+1)%n;
            pre=(mid-1+n)%n;

            //cout<<pre<<" "<<mid<<" "<<next<<br;
            if(nums[mid]<=nums[next] && nums[mid]<=nums[pre]){
                return mid;
            }

            else if(nums[start]<=nums[mid]){
                start=mid+1;
            }
            else if(nums[mid]<=nums[end]){
                end=mid-1;
            }
        }

        return -1;
    }

    
public:
    int search(vector<int>& nums, int target) {
    
    int n=nums.size();
    int ele=target;
    int idofmin=searchMinId(nums,n);

    int s1=0,e1=idofmin-1;

    int s2=idofmin,e2=n-1;

    int half1=binarySearch(nums,s1,e1,ele);

    int half2=binarySearch(nums,s2,e2,ele);

    if(half1==-1 && half2==-1){return -1;}
    else if(half1==-1 && half2!=-1){return half2;}
    else if(half1!=-1 && half2==-1){return half1;}
        
        
    return -1;
    }
    
};
