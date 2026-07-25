class Solution {
public:
    int maxProduct(int n) {
        int temp=n;
        int product=1;
        int max1=INT_MIN;
        while(temp>0){
            int last=temp%10;
            max1=max(max1,last);
            temp=temp/10;
        }
        temp = n;
        int max2 = INT_MIN;
        bool removed = false;
        while(temp>0){
            int last=temp%10;
            if(last==max1 && !removed){
                removed =true;
            }
            else {
                max2 = max(max2,last);
            }
            temp=temp/10;
        }
        return max1*max2;
    }
};