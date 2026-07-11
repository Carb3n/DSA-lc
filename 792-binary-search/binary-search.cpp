class Solution {
public:
int Binarysearch(vector<int>&arr,int x){
    int n=arr.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;//mid changes everytime
        if(arr[mid]==x) return mid;
        else if(arr[mid]>x) high=mid-1;
        else low=mid+1;
    }
    return -1;
}
    int search(vector<int>& nums, int target) {
        return Binarysearch(nums,target);
    }
};