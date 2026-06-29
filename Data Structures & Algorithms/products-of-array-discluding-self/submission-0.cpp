class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int c_zero = 0;
        for(int i : nums){
            if(i == 0){
                c_zero++;
            }
            if(c_zero >1){
                vector<int> res(nums.size(),0);
                return res;
            }
        }
        int mul = 1;
        for(int i: nums){
            mul = mul *i;
        }
        vector<int> res(nums.size());
        for(int i = 0;i<nums.size();i++){
            if(nums[i] != 0){
                res[i] = mul/nums[i];
            }else{
                int t = 1;
                for(int j = 0;j<nums.size();j++){
                    if(nums[j] != 0){
                        t = t * nums[j];
                    }
                }
                res[i] = t;
            }
        }
        return res;
    }
};
