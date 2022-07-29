class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
         unordered_set<int> unique;
        for(int i=0;i<n;i++)
        {
            if(unique.find(candyType[i])==unique.end())
                unique.insert(candyType[i]);
        }
        int unique_elem = unique.size();
        int canhave = n/2;
        if(unique_elem == 1)
            return 1;
        else if(unique_elem<=canhave)
            return unique_elem;
        else
            return canhave;
    }
};