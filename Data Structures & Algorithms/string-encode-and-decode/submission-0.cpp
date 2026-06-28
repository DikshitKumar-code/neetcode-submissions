class Solution {
public:

    string encode(vector<string>& strs) {
        string enc = "";
        for(auto ele : strs){
            enc += ele;
            enc += '`'; 
        }
        return enc;
    }

    vector<string> decode(string s) {
        vector<string> dec;
        string temp = "";
        for(auto ch : s){
            if(ch != '`'){
                temp += ch;
            }else{
                dec.push_back(temp);
                temp = "";
            }
        }
        return dec;
    }
};
