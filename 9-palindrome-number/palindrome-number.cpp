class Solution {
public:
    bool isPalindrome(int x) {
        int duplicateX = x;
        long long reversenum = 0; //Changed to long long to prevent integer overflow
        if (x < 0) return false; 
        while(x>0){
            int lastdigit = x%10;
            reversenum = (reversenum*10)+lastdigit;
            x = x/10;
        }
        if(duplicateX == reversenum){
            return true;
        }else{
            return false;
        }
    }
};