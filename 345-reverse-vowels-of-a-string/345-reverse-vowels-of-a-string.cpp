class Solution {
public:
    bool check(char c)
    {
        if(c == 'a'|| c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return true;
        else
            return false;
    }
    string reverseVowels(string s) {
        int i =0;
        int j = s.length()-1;
        while(i<j)
        {
               if(check(s[i]))
               {
                   if(check(s[j]))
                   {
                       swap(s[i],s[j]);
                       i++;
                       j--;
                   }
                   else
                   {
                       j--;
                   }
               }
            else
            i++;
        }
        return s;
    }
};