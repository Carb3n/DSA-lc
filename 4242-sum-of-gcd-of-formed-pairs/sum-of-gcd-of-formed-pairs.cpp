class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        long long gcdsum=0;
        int low=0;
        int high=n-1;
        vector<int>prefixGcd(n,0);
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
            prefixGcd[i] = gcd(nums[i], maxi);
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        while (low < high) {
        int a = prefixGcd[low];
        int b = prefixGcd[high];

        gcdsum += gcd(a, b);

        low++;
        high--;
    }
        return gcdsum;
    }
};