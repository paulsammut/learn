#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j=0;    // running counter
        int max = 0;    // longest run ever
        bool charA[256] = {false};  /// our "key" array. Keeps track of any previously used characters
        for(int j = 0; j < s.length(); j++)
        {
            // if we haven't yet seen the character, update our max run
            if(!charA[s[j]])
            {
                max = (max > (j+1-i)) ? max : (j+1-i);
                charA[s[j]] = true;
            }
            // if we have, then increase our sliding window i size and remove
            // that character
            else
            {
                charA[s[i]] = false;
                i++; 
                j--;
            }
        }
        return max;
    }
}; 

int main(void)
{
    Solution solution;
    std::cout << "Hi!" << solution.lengthOfLongestSubstring("asjrgapa") << std::endl;
    return 0;
}
