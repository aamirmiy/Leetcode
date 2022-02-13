class Solution {
public:
   int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> map1;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(map1.count(nums[i])>0)
            {
                continue;
            }
            else{
                map1[nums[i]]=count;
                count++;
            }
        }
        int k=0;
        for(auto j=map1.begin();j!=map1.end();j++)
        {   
            nums[k]=j->first;
            k++;
        }
       nums.erase(nums.begin()+k, nums.end());
       sort(nums.begin(),nums.end());
       return nums.size();
    }
};