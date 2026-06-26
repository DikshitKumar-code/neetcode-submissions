class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> rec;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            int complement = target - nums[i];
            auto it = rec.find(complement);
            if(it != rec.end()){
                return {it->second,i};
            }

            rec[nums[i]] = i; 
        }
        return {};
    }
};
