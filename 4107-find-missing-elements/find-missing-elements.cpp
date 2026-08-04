class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> res;

        sort(nums.begin(), nums.end());

        int ans = nums[0];

        for (int i = 0; i < nums.size(); ans++, i++) {
            if (ans < nums[i]) {
                res.push_back(ans);
                i--;
            }
        }

        return res;
    }
};