class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int n=nums.size();
      int maxsum=INT_MIN;
      int sum=0;
      int i=0;
    while(i<n){
        if(sum<0) sum=0;
        sum+=nums[i]; 
        maxsum=max(maxsum,sum);
        i++;
    }
      return maxsum; 
    }
};