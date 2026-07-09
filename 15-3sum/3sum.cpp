class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());//so that it doesnt sort each time
        set<vector<int>>st;
        for(int i=0;i<n;i++){
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            unordered_set<int>mpp;
            for(int j=i+1;j<n;j++){
                int third=-(nums[i]+nums[j]); // 2=-(-1-1)
                if(mpp.find(third)!=mpp.end()){
                    vector<int> temp = {nums[i], nums[j], third};
                    st.insert(temp);
                }
                mpp.insert(nums[j]);//inserting nums[j] as it will be not there in pass one i.e i=0
            }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};