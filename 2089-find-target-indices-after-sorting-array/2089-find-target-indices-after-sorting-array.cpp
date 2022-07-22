class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> result;
        sort(nums.begin(),nums.end());
        int lb = nums[0];
        int up = nums[nums.size()-1];
        int mid = lb+up/2;
        for (int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
                result.push_back(i);
        }
        return result;
    }
};