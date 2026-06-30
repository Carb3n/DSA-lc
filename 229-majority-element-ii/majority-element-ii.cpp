class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
            if(nums[i]==nums[j]) count ++;
            }
if(count > (n/3)) {
    bool found = false;

    for(int k = 0; k < ans.size(); k++) {
        if(ans[k] == nums[i]) {
            found = true;
            break;
        }
    }

    if(!found)
        ans.push_back(nums[i]);
}
        }
        return ans;
    }
};