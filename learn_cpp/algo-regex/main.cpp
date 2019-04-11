#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        
        // string index is j and patter index is i
        int i, j = 0;
        
        // scan through pattern
        for(i = 0; i < p.length(); i++){
            
            // catch for end of pattern not being *
            if(i == p.length() - 1){
                // we are at the end 
                if(p[i] == '.' )        { j++; }
                else if(p[i] == s[j])   { j++; }
                
            }
            
            // still have one char to the right which might be a *
            else{
                cout << "in here i:" << i << endl;
                // check to see if next char is *
                if(p[i + 1]=='*'){
                    cout << "start is to the right" << endl;
                    // if we have a star and a normal preceeding character AND characters after the *
                    if( i+2 < p.length() && p[i] != '.'){
                        // we have chars in the pattern after the star
                        // we have to check if zero or more matches leave us a string that 
                        // can be matched by the remainder of the pattern
                        
                        // we start with 0 char matches
                        while(j < s.length()){
                            
                            string newP = p.substr(i+2, p.length()-i+2);
                            string newS = s.substr(j, s.length()-j);
                            cout << "Recursion p:  " << newP << "   s:  " << newS << endl;
                            if(isMatch(newS, newP)){
                                return true;
                            }else if(s[j]==p[i]){
                                j++;
                            }else{
                                break;
                            }
                            cout << "Back from recursion" << endl;
                        }
                        
                    }
                    
                    else{
                    
                        // next char can match zero or more of the preceeding element
                        bool sm = true; // star match flag
                        while((j < s.length()) && sm){
                            // check for . which is any char, meaning a final match
                            // cout << "while - p[i]: " << p[i] << " s[j]: " << s[j] << endl;
                            if ( p[i] == '.' ){
                                // this is a special case. if i have another character var 
                                // name c after the .* i have to keep matching characters in that 
                                // string still i get to char c.

                                if( (i+2) < p.length()){ // out of bounds check
                                    if (s[j] == p[i+2]){ sm = false; }
                                    else { j++; }
                                } else{ return true; } 
                            }
                            // check current string index with our current "preceeding pattern element" p[i]
                            else if (p[i] == s[j]){ j++; }//cout << "j++ to " << j << endl;}
                            // check if we don't have a match, and break out
                            else { sm = false; }//cout << "setting sm to false" << endl;}
                        }
                        // done with the star match, increment twice, once here and once in the for loop
                        i++;
                        //cout << "increm i: " << i << endl;
                    }
                }
                
                // if there is no star after the char, we check for . and reg chars
                else if(p[i] == '.' )   { j++; }
                else if(j < s.length()){ if(p[i] == s[j])   { j++; } }
                else { return false; }
            }
        }
        
        // if we break out, we have either run out of pattern or string or both if it is a match;
        if(i == p.length() && j == s.length()){ return true;}
        
        //cout << "i: " << i << " j: " << j << " p.len: " << p.length() << " s.len: " << s.length() << endl; 
        return false;          
        
    }
};


int main() {
    string s = "baaabcbcacabcaacb";
    string p = ".b*.*c*a*a*a.*.c";

    Solution sol;

    cout << "Is match: " << sol.isMatch(s,p) << endl;

    return 0;
}
