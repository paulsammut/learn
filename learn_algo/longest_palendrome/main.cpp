#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        
        int n = 0;
        int m = 0;
        int len = 0;
        
        int tempM, tempN, tempMax;
        
        if(s.length() == 0)
            return "";
        
        else if(s.length() == 1)
            return s;
        
        for(int i = 0; i < s.length() - 1; i++)
        {
            tempMax = maxPal(s, i, tempM, tempN);
            if(tempMax >= len)
            {
                len = tempMax;
                m = tempM;
                n = tempN;
            }
        }
        
        return s.substr(m,n);
    }
    
    // calculate the maximum palendrome found about that character
    int maxPal(string& s, int i, int& m, int& n)
    {
        int len = 0;
        
        int j = 1;
        
        // Check if next char is the same and see if any more outer chars form a palendrome
        // ------------------------------------
        // Make sure next char exists
        if (i+1 < s.length())
        {
            // check if next char is the same
            if(s[i]==s[i+1])
            {
                len = 2; m = i; n = i+1;
                
                // see how far the rabbit hole goes
                while(i-j >= 0 && i+j+1 < s.length())
                {
                    if(s[i-j] == s[i+j+1])
                    {   
                        len = 2*j+2; 
                        m = i-j; 
                        n = i+j+1;
                    }
                    else
                        break;
                    j++;
                }
            }
        }
        
        // check if prev char and next char is the same how many, if any, outer chars form a palendrome.
        // -----------------------------------------
        // make sure we can go to next outers
        j = 1;
        
        while(i-j >= 0 && i+j < s.length())
        {
            if(s[i-j] == s[i+j])
            {
                if(2*j+1 > len)
                {
                    len = 2*j+1;
                    m = i-j;
                    n = i+j;
                }
            }
            else
                break;
            j++;
        }
        
        return len;
        
    }
};

int main(void)
{
    Solution solution;
    std::cout << "Hi!" << solution.longestPalindrome("bb") << std::endl;
    return 0;
}
