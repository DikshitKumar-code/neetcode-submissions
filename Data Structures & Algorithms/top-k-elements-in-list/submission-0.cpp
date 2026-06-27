class Solution {

    static bool compare(const pair<int,int> a, const pair<int,int> b){
        return a.second > b.second;
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> rec;
        for(int num : nums){
            rec[num]++;
        }

        vector<pair<int,int>> results;
        for(auto it : rec){
            results.push_back({it.first,it.second});
        }

        sort(results.begin(),results.end(),compare);
        vector<int> res;
        for(int i = 0;i < k;i++){
            res.push_back(results[i].first);
        }
        return res;
    }
};
