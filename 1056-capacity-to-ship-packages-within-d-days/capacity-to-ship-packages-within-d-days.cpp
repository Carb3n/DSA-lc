class Solution {
public:
    int maxnum(vector<int>& nums){
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>maxi)
            maxi=nums[i];
        }
        return maxi;
    }
    int daysreq(vector<int>& nums,int cap){
        int n = nums.size();
        int load=0,days=1;
        for(int i=0;i<n;i++){
            if(load+nums[i]>cap){
                days++;
                load=nums[i];
            }
            else load+=nums[i];
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=maxnum(weights);
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            int numday=daysreq(weights,mid);
            if(numday<=days){
                high=mid-1;
            }
            else low=mid+1;
        }
        return low;
    }
};