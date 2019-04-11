#include <map>
#include <iostream>
#include <string>
#include <set>
#include <functional>
#include <algorithm>

using namespace std;

int main(){
    map<string, int> tMap;

    tMap = {{"hello", 0}, {"dick", 3}};

    map<string, int> mapOfWordCount = 
       {{"aaa", 10}, 
        {"ddd", 41}, 
        {"bbb", 62}, 
        {"ccc", 13}};

    // Declaring a predicate that accepts 2 pairs and return a bool
    typedef function<bool(pair<string, int>,pair<string, int>)> Comparator;

    Comparator comFunctor = [](pair<string,int> elem1, pair<string,int> elem2){
        return elem1.second < elem2.second;
    };

    // Declare a set that will store the pairs
    set<pair<string,int>,Comparator> setOfWords(
            mapOfWordCount.begin(), mapOfWordCount.end(), comFunctor);

    for(auto&& i : setOfWords){
        cout << i.first << " - " << i.second << endl;
    }

    return 0;
}
