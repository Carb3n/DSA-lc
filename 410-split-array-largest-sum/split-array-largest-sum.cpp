class Solution {
public:
    int arrays(vector<int>& nums,int x){
        int n=nums.size();
        int count=1;
        int currsum=0;
        for(int i=0;i<n;i++){
            if(currsum+nums[i]<=x){
                currsum+=nums[i];
            }
            else {
            count++;
            currsum=nums[i];
            }
        }
        return count;
    }
    int splitArray(vector<int>& nums, int k) {
        int low= *max_element(nums.begin(),nums.end());
        int high= accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            int subarrays=arrays(nums,mid);
            if(subarrays>k){
                low=mid+1;
            }
            else high=mid-1;
        }
        return low;
    }
};