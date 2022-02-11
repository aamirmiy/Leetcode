#include <map>
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> map1= {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        
        int arr[s.length()];
        int sum=0;
        //int temp=map1.at(s[s.length()-1]);
        //int sum=map1.at(s[s.length()-1]);
        //for(int i=s.length()-1;i>0;--i)
        for(int i=0;i<s.length()-1;i++)
        {
            //if(temp<=map1.at(s[i-1]))
            if(map1.at(s[i])>=map1.at(s[i+1]))
            {
                //temp=map1.at(s[i-1]);
               //sum+=temp;
                arr[i]=map1.at(s[i]);
            }
            else{
                //sum-=map1.at(s[i-1]);
                arr[i]=-map1.at(s[i]);
            }
        }
         arr[s.length()-1]=map1.at(s[s.length()-1]);
         for(int j=0;j<s.length();j++)
         {
             sum+=arr[j];
         }
        return sum;
    }
};
