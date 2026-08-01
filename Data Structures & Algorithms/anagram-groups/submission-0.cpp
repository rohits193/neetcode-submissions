class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (int i = 0; i < strs.size(); i++) {//for(const auto& s: strs)
            string sorteds =strs[i];
            sort(sorteds.begin(), sorteds.end());
            mp[sorteds].push_back(strs[i]);
        }

        vector<vector<string>> result;
        for(auto s : mp){
        result.push_back(s.second);
        }

        return result;
    }
};
