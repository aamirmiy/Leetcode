class Solution {
public:
    //Apply binary search.
    int search(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size()-1;
    
    while(low<=high)
    { int mid = (low+high)/2;
        if(nums[mid]==target)
            return mid;
        else if(nums[low]<=nums[mid])
        {
        //sorted on left side
          if(target>=nums[low] && target <= nums[mid])
            {
                high = mid-1;            
            }
            else
                low=mid+1;
    }
        else if(nums[mid]<=nums[high])
        {
            if(target<=nums[high]&&target>=nums[mid])
                low=mid+1;
            else
                high=mid-1;
        }
    }
        return -1;
    }
};