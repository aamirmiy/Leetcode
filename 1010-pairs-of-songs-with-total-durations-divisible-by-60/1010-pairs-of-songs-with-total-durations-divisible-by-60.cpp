class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> v(60,0); //initialize array of 60
        int count = 0; //initialize count variable to 1
        for(int i=0;i<time.size();i++)
        {
            int a = time[i]%60; //calculate mod value for each element
            if(a==0)
            {
                count+=v[0]; //if mod == 0  then add to count value of v[0]
            }
            else
            {
                count+=v[60-a]; // else add to count value of v[60-a]
            }
            v[a]++; 
        }
        return count;
    }
};