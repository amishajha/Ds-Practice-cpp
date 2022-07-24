
// Given a string s consisting of lowercase English letters, return the first letter to appear twice.

// Note:

// A letter a appears twice before another letter b if the second occurrence of a is before the second occurrence of b.
// s will contain at least one letter that appears twice

class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>mp;
        for(auto i : s){
            if(mp[i]==1){
                return i;
            }
            else {
            mp[i]++;
            }
        }
   
    return 0;

    }
};