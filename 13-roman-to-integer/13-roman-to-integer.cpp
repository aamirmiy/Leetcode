#include <map>
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> map1= {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        //map<char, int> map1;
        // map1['I']=1;
        // map1['V']=5;
        // map1['X']=10;
        // map1['L']=50;
        // map1['C']=100;
        // map1['D']=500;
        // map1['M']=1000;
        
        int temp=map1.at(s[s.length()-1]);
        int sum=map1.at(s[s.length()-1]);
        for(int i=s.length()-1;i>0;--i)
        {
            if(temp<=map1.at(s[i-1]))
            //if(map1.at(s[i])>=map1.at(s[i+1]))
            {
                temp=map1.at(s[i-1]);
               sum+=temp;
                //s[i]=map1.at(s[i]);
            }
            else{
                sum-=map1.at(s[i-1]);
                //s[i]=-map1.at(s[i]);
            }
        }
        // s[s.length()-1]=map1.at(s[s.length()-1]);
        // for(int j=0;j<s.length();j++)
        // {
        //     sum+=s[j];
        // }
        return sum;
    }
};
