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
    long long Hours(vector<int>&nums,int hourly){
        int n=nums.size();
        long long totalH=0;
        for(int i=0;i<n;i++){
         totalH += ((long long)nums[i] + hourly - 1) / hourly;
        }
        return totalH;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
       int low=1;int high=findmax(piles);
       while(low<=high){
        int mid=low+(high-low)/2;
        long long totalH=Hours(piles,mid);
        if(totalH<=h){
            high=mid-1;
        }
        else low=mid+1;
       }
       return low;
    }
};