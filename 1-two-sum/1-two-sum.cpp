class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int temp=0;
        unordered_map<int,int> map1;
        for(int i=0;i<nums.size();i++)
        { 
            temp=target-nums[i];
            if(map1.count(temp)>0)
            {
                result.push_back(i);
                result.push_back(map1[temp]);
            }
            else
            {
                map1[nums[i]]=i;
            }
        }
        return result;
    }
};