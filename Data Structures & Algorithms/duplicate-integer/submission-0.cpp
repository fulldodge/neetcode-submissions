class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> setd;
        for(const auto &it : nums)
        {
            if(!setd.insert(it).second) return true;
        }
        return false;
    }
};