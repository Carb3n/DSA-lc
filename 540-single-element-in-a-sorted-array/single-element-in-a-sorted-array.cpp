class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int mid;
        while(low<=high){
            if(n==1) return nums[0];//edge cases
            if (nums[0] != nums[1])
            return nums[0];
            if (nums[n - 1] != nums[n - 2])
            return nums[n - 1];
            mid=low+(high-low)/2;
            int left=mid-1;
            int right=mid+1;
            if(nums[mid]!=nums[left] && nums[mid]!=nums[right]){
                return nums[mid];
            }
            if((mid%2==0 && nums[mid]==nums[right]) || (mid%2==1 && nums[mid]==nums[left])){
                low=mid+1;
            }
            else{
                high=mid-1;;
            }
        }
        return -1;
    }
};