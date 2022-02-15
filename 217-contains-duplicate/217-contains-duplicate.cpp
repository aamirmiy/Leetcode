class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> map1;
        bool result= false;
        for(int i=0;i<nums.size();i++)
        {
            if(map1.count(nums[i])>0)
            {
                result=true;
                break;
            }
            map1[nums[i]]=i;
        }
        return result;
    }
};