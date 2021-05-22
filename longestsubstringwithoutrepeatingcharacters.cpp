//Given a string s, find the length of the longest substring without repeating characters.

 

#include<iostream>
#include<vector>
using namespace std;

bool containsRepeated(string s)
{
	 vector<int> visited(256,-1);
        
        if(s.length()>256)
        {
            return true;
        }
        
        for(int i=0;i<s.length();i++)
        {
            if(visited[int(s[i])]==-1)
            {
                visited[int(s[i])]++;
            }
            else
            {
                return true;
            }
        }
        return false;
}
int main()
{
	
	string s="abcabcbb";
	int n=s.length();
	int l=INT_MIN;
	for(int i=0;i<n;i++)
	{
		for(int len=1;len<=n-i;len++)
		{
			if(!containsRepeated(s.substr(i,len)))
			{
				l=max(len,l);
			}
		}
	}
	cout<<l;
	
	/*
	Another Best solution
	unordered_set<char> set;
    
		int i = 0, j = 0, n = s.size(), ans = 0;
    
		while( i<n && j<n)
		{
			if(set.find(s[j]) == set.end()) //If the character does not in the set
			{
				set.insert(s[j++]); //Insert the character in set and update the j counter
				ans = max(ans, j-i); //Check if the new distance is longer than the current answer
			}
			else
			{
				set.erase(s[i++]); 
				/*If character does exist in the set, ie. it is a repeated character, 
				we update the left side counter i, and continue with the checking for substring. 
			}
		}
    
		return ans;*/
}
