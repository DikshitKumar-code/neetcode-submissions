class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> rec;
        int n = nums.size();
        vector<int> ans(2);
        for(int i = 0;i<n;i++){
            if(rec.contains(nums[i])){
                ans[0] = rec[nums[i]];
                ans[1] = i;
            }

            rec[target-nums[i]] = i;
        }
        return ans;
    }
};
