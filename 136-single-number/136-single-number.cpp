class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> map1;
        int temp=0;
        for(int i=0;i<nums.size();i++)
        {
            if(map1.count(nums[i])>0)
            {
                map1[nums[i]]=2;
            }
            else
            {
            map1[nums[i]]=1;
            }
        }
        for(int j=0;j<nums.size();j++)
        {
            if(map1[nums[j]]==1)
            {
                temp=nums[j];
            }
        }
    return temp;
    }
};
