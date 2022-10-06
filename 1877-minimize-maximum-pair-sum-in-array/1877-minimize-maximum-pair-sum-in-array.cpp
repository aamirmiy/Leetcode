class Solution {
public:
    int minPairSum(vector<int>& nums) {
        vector<int> sums;
        sort(nums.begin(), nums.end());
        int start =0 ;
        int end = nums.size()-1;
        while(start<end)
        {
            int sum = 0;
            sum=sum+nums[start]+nums[end];
            sums.push_back(sum);
            start++;
            end--;
        }
        return *max_element(sums.begin(), sums.end());
    }
};