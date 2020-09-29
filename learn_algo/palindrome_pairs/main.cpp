#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    
    bool isPal(string& s)
    {
        int left = 0, right = s.length() - 1;
        
        while(left < right)
        {
            if(s[left++] != s[right--])
                return false;
        }
        return true;
    }

    vector<vector<int>> palindromePairs(vector<string>& words) {
        
        vector<vector<int>> out;
        
        unordered_map<string, int> hashed;
        
        for(int i = 0; i < words.size(); i++)
            hashed[words[i]] = i;
        
        for(int i = 0; i < words.size(); i++)
        {
            string left = words[i];
            reverse(left.begin(), left.end());
            string mid;
            
            
            while(left.length() > 0)
            {
                // see if we have a match
                auto search = hashed.find(left);
                if(search != hashed.end())
                {
                    out.push_back({i, search->second});
                }
                mid += left.front();
                left.erase(0,1);
                if(!isPal(mid))
                    continue;
            }
            
        }
        
        return out;
    }
};


int main()
{
    vector<string> words = {"abcd","dcba","lls","s","sssll"};

    Solution sol;

    vector<vector<int>> out = sol.palindromePairs(words);

    return 0;
}
