// Problem Link
// https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/description/


// Source Code

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n = s1.size();
        int count = 0;
        map<char, int> mp1, mp2;

        for(int i = 0;i < n;i++){
            if(s1[i] != s2[i]){
                count++;
            }

            mp1[s1[i]]++;
            mp2[s2[i]]++;
        }

        if(count > 2){
            return false;
        }


        for(char c : s1){
            if(mp1[c] != mp2[c]){
                return false;
            }
        }


        return true;
    }
};