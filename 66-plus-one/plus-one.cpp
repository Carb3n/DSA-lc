class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        if(digits[n-1]!=9) digits[n-1]++;
    else{
        int x=n-1;
        int carry=1;
        while(carry){
            if(x<0) break;
            digits[x]+=carry;
            if(digits[x]<10) return digits;
            else{
                digits[x]=0;
                carry=1;
                x--;
            }
        }
        if(x<=0  && carry==1){
            digits.insert(digits.begin(),1);
        }
    }
    return digits;
    }
};