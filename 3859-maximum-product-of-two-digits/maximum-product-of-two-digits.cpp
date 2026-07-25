class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);//converts the number into a string of digits.
        sort(s.rbegin() , s.rend());//rbegin and rend
        int maxProduct = (s[0]-'0')*(s[1]-'0');//s[0] and s[1] are the two largest digits.
        return maxProduct;
    }
};