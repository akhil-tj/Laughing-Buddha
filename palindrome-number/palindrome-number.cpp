class Solution {
public:
    bool isPalindrome(int x) {
        long int rev=0; 
       int digit=0, temp = x;
        if(x<0) {
            return false;
        } else {
            while(x!=0) {
            digit = x % 10;
            rev = rev * 10 + digit;
            x = x/10;
        }
        }      
        if(rev==temp) {
            return true;
        } else {
            return false;
        }
    }
};