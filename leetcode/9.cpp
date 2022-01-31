class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 or (x%10==0 and x!=0)){
            return false;
        }
        //solution dekh lio iske baad
        int revertedNumber = 0;
        while(x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }
        return x == revertedNumber || x == revertedNumber/10;
    }
};