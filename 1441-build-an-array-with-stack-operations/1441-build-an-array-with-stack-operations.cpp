class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> result;
    int j=1;
        for(int i=0;i<target.size();)
        {
            if(target[i]==j)
            {
                result.push_back("Push");
                i++;
            }
            else
            {
                result.push_back("Push");
                result.push_back("Pop");
            }
            j++;
        }
        return result;
    }
};