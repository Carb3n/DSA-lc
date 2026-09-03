class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minOdd = INT_MAX;
        for (int x : nums1) {
            if (x % 2 != 0) {
                minOdd = min(minOdd, x);
            }
        }
        if(minOdd==INT_MAX) return true; //means no odd number
        for (int x : nums1) {
            if (x % 2 == 0) {
                if (x - minOdd < 1) 
                    return false;
            }

        }
        return true;
    }
};