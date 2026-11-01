class Solution {
public:
    int findNumbers(vector<int>& nums) {

        // int count = 0;
        // for (int i : nums) {
        //     string s = to_string(i);
        //     if (s.size() % 2 == 0) count++;
        // }
        // return count;
        
        int count = 0;
        for(auto i:nums){
            int cnt = 0;
            while(i!=0){
                int lastdigit = i%10;
                i = i/10;
                cnt++;
            }
            if(cnt%2==0){
                count++;
            }
        }
        return count;
    }
};