class Solution {
public:
    bool ischar(char c){
        if((c>='a' && c<='z') || (c>='0' && c<='9'))
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    bool checkPalindrome(string s)
    {
        int st=0;
        int e=s.length()-1;
        while(st<=e)
        {
        if(s[st]!=s[e])
            return 0;
        else
        {
            st++;
            e--;
        }
        }
        return 1;
    }
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), :: tolower);
        string temp="";
        for(int i=0;i<s.length();i++)
        {
            if(ischar(s[i]))
            {
                temp.push_back(s[i]);
            }
        }
        return checkPalindrome(temp);
    }
};