class Solution {
public:
    int smallestNumber(int n, int t) {
        int num=n;
    while(num){
       int temp=num;
        int product=1;
        while(temp!=0){
            int last=temp%10;
            product=product*(last);
            temp/=10;
        }
            if(product%t==0) return num;
            num++;
    }
    return -1;
    }
};