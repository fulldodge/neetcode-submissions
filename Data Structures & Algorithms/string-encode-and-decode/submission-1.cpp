class Solution {
   public:
    string encode(vector<string>& strs) {

        const std::string key = "SuperSecterXOR";
        std::string combined = "";

        for (size_t i = 0; i < strs.size(); ++i) {
            combined += strs[i]+'\n';
        }

        for (int i = 0; i < combined.size(); ++i) {
            combined[i] ^= key[i % key.size()];
        }
        return combined;
    }

    vector<string> decode(string s) {
        std::vector<string> output;
        const std::string key = "SuperSecterXOR";
        for (size_t i = 0; i < s.size(); ++i) {
            s[i] ^= key[i % key.size()];
        }
        size_t start = 0;
        size_t end = s.find('\n');
        while (end != std::string::npos) {
            output.push_back(s.substr(start, end - start));
            start = end + 1;
            end = s.find('\n',start);
        }
        return output;
    }
};
