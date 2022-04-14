class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> umap;
        int count = 0;
        for (int i=0;i<nums.size();i++)
        {
            if(umap.count(nums[i])>0)
            {
                if(abs(i-umap[nums[i]])<=k)
                {
                    count=count+1;
                    break;
                }
                else
                    umap[nums[i]]=i;
            }
            else{
                umap[nums[i]]=i;
            }
        }
        if(count>0)
            return true;
        else
            return false;
    }
};