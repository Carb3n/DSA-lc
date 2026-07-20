class Solution {
public:
int findmax(vector<int>&nums){
    int n=nums.size();
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,nums[i]);
    }
    return maxi;
}
int divisor(vector<int>&nums ,int mid){//mid is our divisor
    int sum=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        sum+=ceil((double)nums[i]/(double)mid);//rounds off
    }
    return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=findmax(nums);
        while(low<=high){
            int mid=low+(high-low)/2;
        if(divisor(nums,mid)<=threshold){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        }
        return low;
    }
};