class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;;
        string add="";
    while( j>=0||i>=0||carry){
        int sum=carry;
        if(i>=0) sum+=num1[i--]-'0';
        if(j>=0) sum+=num2[j--]-'0';
         add=char((sum%10)+'0') + add;
         carry=sum/10;
    }
    return add;
    }
};