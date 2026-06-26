class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }
        unordered_map<char,int> rec;
        for(char ch: s){
            rec[ch] += 1;
        }
        for(char ch:t){
            rec[ch] -= 1;
            if(rec[ch] < 0){
                return false;
            }
        }
        return true;
    }
};
