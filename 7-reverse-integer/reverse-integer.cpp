class Solution {
public:
//     int countOfDigits(int n){
//     int count= 0;
//     while(n){
//         count++;
//         n = n/10;
//     }
//     return count;
// }
    int reverse(int x) {
        long long reversenum = 0;
        // int n = countOfDigits(x);
        while(x!=0){
            int lastdigit = x%10;
            reversenum = (reversenum*10)+lastdigit;
            x = x/10;
        }
        if (reversenum > INT_MAX || reversenum < INT_MIN) {
        return 0;
        }
        return int(reversenum);
    }
};