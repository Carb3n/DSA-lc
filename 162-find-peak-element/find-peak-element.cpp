class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int low=1;
        int high=n-2;//so mid can never be n or -1
        if (n == 1) return 0;
        if (nums[0] > nums[1]) return 0;
        if (nums[n-1] > nums[n-2]) return n-1;
        while(low<=high){
           int mid=low+(high-low)/2;
            int left=mid-1;
            int right=mid+1;
            if(nums[left]<nums[mid] && nums[right]<nums[mid]) return mid;
            else if(nums[right]>nums[mid]){
                low=mid+1;
            }
            else if(nums[left]>nums[mid]){
                high=mid-1;
            }
        }
        return -1;
    }
};