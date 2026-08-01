class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int n = nums.size();
        int diff = 0;
        vector<int> result;

        for (int i = 0; i < n; i++) {
            diff = target - nums[i];
            if (mp.find(diff) != mp.end()) {
                result = {mp[diff], i};
                return result;
            }
            mp[nums[i]] = i;
        }
        return result;
    }
};
