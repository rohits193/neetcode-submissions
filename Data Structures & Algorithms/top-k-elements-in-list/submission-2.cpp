class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        /*for (int i = 0; i < nums.size(); i++) {
            if (freq.find(nums[i]) != freq.end()) {
                freq[nums[i]]++;

            } else
                freq.insert({nums[i], 1});
        }*/

        for(int num:nums){
            freq[num]++;
        }

        vector<pair<int, int>> arr;
        for (const auto& p : freq) {
            arr.push_back({p.second, p.first});
        }
        sort(arr.rbegin(), arr.rend());

        vector<int> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(arr[i].second);
        }

        return result;
    }
};
