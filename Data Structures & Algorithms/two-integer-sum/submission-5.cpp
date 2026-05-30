class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    std::unordered_map<int,int> seenNumbers;
        
    for(int i=0;i<nums.size(); ++i)
    {
        int current = nums[i];
        int requiredNumber = target-current;

        if(seenNumbers.find(requiredNumber)!= seenNumbers.end())
        {
            return {seenNumbers[requiredNumber],i};
        }
        seenNumbers[current]=i;
    }
    return {};
    }
};
