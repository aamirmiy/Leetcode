class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    int ans;
        int min=INT_MAX;
    for(int i=0;i<nums.size()-2;i++)
    {
            if(i==0 || (i>0 && nums[i]!=nums[i-1]))
            {
            int l = i+1;
            int h = nums.size()-1;
            
            while(l<h)
            {
            int sum = nums[l]+nums[h]+nums[i];
            if(abs(sum-target)<min)
            {   
                min=abs(sum-target);
                ans= sum;
            }
            if(sum==target)
                return sum;
            else if(sum<target)
                l++;
            else
                h--;
            }
            }
    }
        return ans;
    }
};