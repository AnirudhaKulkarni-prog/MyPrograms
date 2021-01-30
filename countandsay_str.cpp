//leetcode count and say


class Solution {
public:
    string countAndSay(int n) {
        
        int i=0;
        
        if(n==1)
            return "1";
        if (n==2)
            return "11";
        string s="11";
        
        while(i<n-2)
        {
            string t="";
            s=s+'&';
            int cnt=1;
            for(int j=1;j<s.length();j++)
            {
                if(s[j]!=s[j-1])
                {
                    t=t+to_string(cnt);
                    t=t+s[j-1];
                    cnt=1;
                    
                }
                else
                {
                    cnt++;
                }
            }
            s=t;
            
            
           i++; 
            
            
        }
       return s; 
    }
};
