class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int numsLength = nums.size();
        std::vector<int> result(numsLength, 1);
        int prefix{1};
        for (int i = 0; i < numsLength; ++i)
        {
            result[i] = prefix;
            prefix *= nums[i];
        }
        int postfix{1};
        for (int i = numsLength-1; i >= 0; --i) {
            result[i] *= postfix;
            postfix *= nums[i];
        }
        return result;
    }
};
