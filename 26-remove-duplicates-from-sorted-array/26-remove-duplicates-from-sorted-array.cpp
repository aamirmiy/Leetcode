class Solution {
public:
   int removeDuplicates(vector<int>& nums) {
        int l=1;
       for(int r=1;r<nums.size();r++)
       {
           if (nums[r]!=nums[r-1])
           {
               nums[l]=nums[r];
               l++;
           }
       }
       //nums.erase(nums.begin()+l,nums.end());
       return l;
   }
};