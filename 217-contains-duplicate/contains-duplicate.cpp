class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        int i;
        map<int, int> mp;
        for (i = 0; i < n; i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]>1){
                return true;
            }
        }return false;
    }
};