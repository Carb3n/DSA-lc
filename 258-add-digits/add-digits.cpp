class Solution {
public:
    int addDigits(int num) {
        if(num==0) return 0;
        int last;
        int sum=0;
        while(num>0){
        last=num%10;
        sum+=last;
        num=num/10;
        }
        if(sum%10==sum) return sum;
       return addDigits(sum);
    }
};