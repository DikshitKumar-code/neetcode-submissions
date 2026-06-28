class Solution {
public:

    string encode(vector<string>& strs) {
        string enc ="";
        for(const auto &s : strs){
            enc.append(to_string(s.length()));
            enc.push_back('#');
            enc.append(s);
        }
        return enc;
    }

    vector<string> decode(string s) {
        vector<string> dec;
        int i = 0;
        while(i < s.length()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }

            int len = stoi(s.substr(i,j-i));
            i = j +1;
            dec.push_back(s.substr(i,len));
            i += len;
        }
        return dec;
    }
};
