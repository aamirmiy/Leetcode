class Solution {
public:
    int maxArea(vector<int>& height) {
        //2 pointer approach
        int i=0;
        int j=height.size()-1;
        int area=0;
        int max= INT_MIN;
        while(i<j)
        {
            area = min(height[i],height[j])*(j-i);
            if(area>max)
            {
                max= area;
            }
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return max;
    }
};