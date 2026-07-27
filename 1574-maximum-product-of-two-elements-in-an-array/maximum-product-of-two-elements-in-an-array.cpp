class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        int maxj=INT_MIN;
        int i=0;
        while(i<n){
            if(nums[i]>=maxi){
                maxj=maxi;
                maxi=nums[i];
            }
           else if(nums[i]>=maxj){
                maxj=nums[i];
            }
            i++;
        }
        return (maxi-1)*(maxj-1);
    }
};