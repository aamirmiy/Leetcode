class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else
        { 
        int temp=x;
        long int rev_num = 0;
        while (x > 0) {
        rev_num = rev_num * 10 + x % 10;
        x = x / 10;
        }
        if(rev_num==temp)
        {
            return true;
        }
        else
        {
            return false;
        } 
        }
        
    }
};