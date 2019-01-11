#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int run = 0;    // running counter
        int max = 0;    // longest run ever
        bool charArray[256] = {false};  /// our "key" array. Keeps track of any previously used characters
        for(int j = 0; j < s.length(); j++)
        {
            std::fill(charArray, charArray+255, 0);
            run = 0;
            // Iterate through chars in string
            for(int i = j; i<s.length(); i++)
            { 
                // if we have a recurring character reset our array
                if(charArray[s[i]]) {
                    std::fill(charArray, charArray+255, 0);
                    run = 0;
                }

                charArray[s[i]] = true;
                run++;
                max = (run>max) ? run : max;
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

