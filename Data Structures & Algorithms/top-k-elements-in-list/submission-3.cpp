class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::vector<int> result;
        if (k == 0) return result;
        std::unordered_map<int, int> unMap;

        for (auto num : nums) {
            unMap[num]++;
        }
        std::vector<std::vector<int>> buckets(nums.size() + 1);

        for (auto [key, value] : unMap) {
            buckets[value].push_back(key);
        }

        for (int i = buckets.size() - 1; i > 0; i--) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) {
                    return result;
                }
            }
        }
    }
};
