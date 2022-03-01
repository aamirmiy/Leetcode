class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lb=0;
        int ub=nums.size()-1;
        int mid=0;
        while (lb<=ub)
        {
        mid = (lb+ub)/2;
        if (target<nums[mid])
        {
            ub=mid-1;   
        }
        else if (target==nums[mid])
        {
            return mid;
        }
        else
        {
            lb=mid+1;
        } 
        }
        if(target<nums[mid])
            return lb;
        else
            return mid+1;
    }
};