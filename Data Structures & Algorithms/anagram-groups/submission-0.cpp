class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> rec;

        for(const string&s : strs){
            int count[26] = {0};

            for(char c : s){
                count[c-'a'] +=1;
            }
            
            string signature = "";
            for(int i = 0;i<26;i++){
                signature += to_string(count[i]) + ",";
            }

            rec[signature].push_back(s);

        }

        vector<vector<string>> ans;

        for(auto &pair : rec){
            ans.push_back(move(pair.second));
        }

        return ans;
    }
};
