class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> index_map;
        vector<int> output;
        for (int idx = 0; idx<nums.size();idx++)
        {
            int residual = target - nums[idx];
            if(index_map.find(residual) != index_map.end())
            {
                output.push_back(index_map.find(residual)->second);
                output.push_back(idx);
                return output;
            }
            index_map.insert({nums[idx],idx});
        }
        return output;
    }
}; 