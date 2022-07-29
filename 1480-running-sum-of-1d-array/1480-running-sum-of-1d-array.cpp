class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int> result;
        for (int i=1;i<=nums.size();i++)
        {
            for(int j=0; j<i;j++)
            { 
                sum=sum+nums[j];
            }
            result.push_back(sum);
            sum=0;
        }
        return result;
    }
};