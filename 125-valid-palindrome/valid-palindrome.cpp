class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int left = 0;
        int right = n - 1;
        char temp;
        while(left<right)
        {   
            while(left<right && !isalnum(s[left])){
                left++;
            }
            while(left<right && !isalnum(s[right])){
                right--;
            }
            if (tolower(s[left]) != tolower(s[right])){
                return false;
            }else{
                left++;
                right--;
            }
        }return true;
    }
};