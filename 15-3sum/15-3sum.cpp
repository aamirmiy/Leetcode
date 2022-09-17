class Solution {
public:
     vector<vector<int>> threeSum(vector<int>& nums) {
     vector<vector<int>> result;
     sort(nums.begin(),nums.end());
     for(int i=0;i<nums.size()-2;i++)
     {//skip duplicates while going forward
         if(i==0 || (i>0 && nums[i]!=nums[i-1]))
         {
             int l = i+1, h =nums.size()-1,sum=0-nums[i];
             while(l<h)
             {   //checking condition for b+c=-a
                 if(nums[l]+nums[h]==sum)
                 {
                     vector<int> temp;
                     temp.push_back(nums[l]);
                     temp.push_back(nums[h]);
                     temp.push_back(nums[i]);
                     result.push_back(temp);
                     //skip duplicates while going forward and backward
                     while(l<h && (nums[l]==nums[l+1])) l++;
                     while(l<h && (nums[h]==nums[h-1])) h--;
                     l++;
                     h--;
                 }
                 //if sum is less than -a then increment low else decrement high
                 else if(nums[l]+nums[h]<sum)
                     l++;
                 else
                     h--;
                 
             }
             
         }
     }
      return result;   
     }
};