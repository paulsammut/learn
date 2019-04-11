#include <string>
#include <iostream>

using namespace std;

/**
 * @brief Return True is strings are 1 edit away from each other
 *
 * @param a
 * @param b
 *
 * @return 
 */
bool checkEdit(string a, string b){
    // Quick cases
    if(a == b){ return false; }

    int alen = a.length(), blen = b.length();

    // check for inserting/removing char
    if(alen == blen+1 || blen == alen+1){
        // find the long and short one:
        string longStr = (alen > blen)? a : b;
        string shortStr = (alen > blen)? b : a;
        cout << "Long string: " << longStr << " short: " << shortStr << endl;
        
        int editcount = 0;
        
        // our insert char engine
        for(int i = 0; i < longStr.length() ; i++){
            if(longStr[i] != shortStr[i]){
                shortStr.insert(i,1,longStr[i]);
                editcount ++;
            }
            if(editcount > 1){ return false; }
        }
        if(editcount == 1){ return true; }
        else { return false; }
    }

    // replace one char
    if(alen == blen){
        // check for a char replacement
        int repCount = 0;
        for(int i = 0; i<alen; i++){
            if(a[i] != b[i]){
                repCount ++;
                a[i] = b[i];
            }
            if(repCount > 1){ return false; }
        }
        if(repCount == 1){ return true; }
        else { return false; }
    }
    return false;
}

int main(){

    string a, b;
    cout << "Enter string a:";
    getline (cin, a);
    cout << "Enter string b:";
    getline (cin, b);
    cout << "The return is: " <<  checkEdit(a,b) << endl;

    return 0;
}

// Write a function to return if two words are exactly "one edit" away, where an edit is:
//    * Inserting one character anywhere in the word (including at the beginning and end)
//    * Removing one character
//    * Replacing exactly one character
