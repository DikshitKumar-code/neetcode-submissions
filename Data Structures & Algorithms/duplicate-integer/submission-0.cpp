class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,bool> vis;

        for(int num : nums){
            if(vis[num] == true){
                return true;
            }
            vis[num] = true;
        }
        return false;
    }
};