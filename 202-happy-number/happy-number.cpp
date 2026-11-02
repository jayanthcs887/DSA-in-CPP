class Solution {
public:

    bool solve(int n, unordered_set<int>& st) {
        if(n == 1) {
            return true;
        }
        if(st.find(n) != st.end()) {    // it checks  the number is present in the cycle
            return false;
        }
        st.insert(n);
        int s = 0;
        while(n > 0) {
            int lastdigit = n % 10;
            n = n / 10;
            s += lastdigit * lastdigit;
        }
        return solve(s, st);
    }

    bool isHappy(int n) {
        unordered_set<int> st;
        return solve(n, st);
    }
};