class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> index_map;
        vector<int> output;
        for (int idx = 0; idx<nums.size();idx++)
        {
            if(index_map.find(target - nums[idx]) != index_map.end())
            {
                output.push_back(index_map[target - nums[idx]]);
                output.push_back(idx);
                return output;
            }
            index_map[nums[idx]] = idx;
        }
        return output;
    }
}; 