class Solution {
private:
    void solve(string digits, vector<string>& ans, int index, string output, string arr[])
    {
        //base case
        if(index>=digits.length())
        {
            ans.push_back(output);
            return ;
        }
        
        int value = digits[index]-'0';
        for(int j=0;j<arr[value].length();j++)
        {
            output.push_back(arr[value][j]);
            solve(digits, ans, index+1, output, arr);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
    vector<string> ans;
    string output;
    if(digits.length()==0)
        return ans;
    int index = 0;
    string arr[10] = {" "," ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, ans, index, output, arr);
    return ans;
    }
};