class Solution {
public:
    int titleToNumber(string columnTitle) {
        int len = columnTitle.length();
        int sum=0;
        for(int i=0;i<columnTitle.length();i++)
        {
            sum=sum+(pow(26,len-1)*(columnTitle[i]-'A'+1));
            len--;
        }
        return sum;
    }
};