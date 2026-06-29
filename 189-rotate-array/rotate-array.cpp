class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int temp=0;
        int n=nums.size();
        k=k%n;
            for(int i=0,j=n-1;i<j;i++,j--){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
            for(int i = 0, j = k-1; i < j; i++, j--) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            }
            for(int i=k,j=n-1;i<j;i++,j--){
             int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp; 
            }
       return;
    }
};