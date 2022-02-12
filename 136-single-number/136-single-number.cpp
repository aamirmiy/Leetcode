class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> map1;
        sort(nums.begin(),nums.end());
        int temp=0;
        if (nums.size()==1)
        {
            return nums[0];
        }
        for (int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                map1[nums[i]]=i;
                  
            }
            else if(map1.count(nums[i])>0)
            {
                    if(i==nums.size()-2)
                    {
                        temp=nums[i+1];
                        
                    }
            }
            else
            {
                    temp=nums[i];
                    return nums[i];   
            }
        }
    return temp;
    }
};