class Solution {
public:
    bool isPalindrome(int n) {
       int reverse=0;
       int last;
       int original=n;
       while(n!=0){
        if(n<0) return false;
        last=n%10;
        if(reverse>=INT_MAX/10 || reverse<=INT_MIN/10) return false;
        reverse=(reverse*10)+last;
        n=n/10;
       }
       if(original==reverse) return true;
       else return false;
    }

};