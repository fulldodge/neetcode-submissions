class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> seen;

        for (const std::string& s : strs) {
            std::string count(26, 0);
            for (char c : s) {
                int index = c - 'a';
                count[index]++;
            }
            seen[count].push_back(s);
        }
        std::vector<std::vector<std::string>> answer;
        for (const auto& key : seen) {
            answer.push_back(key.second);
        }
        return answer;
    }
};
