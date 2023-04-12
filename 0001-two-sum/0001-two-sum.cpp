class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len_nums = nums.size();
        vector<int> output;
        output.resize(2);
        for (int idx1=0;idx1<len_nums;idx1++)
        {
            int residual = target - nums[idx1];
            vector<int> nums_2nd = nums;
            nums_2nd.erase(nums_2nd.begin()+idx1);
            for (int idx2=0;idx2<(len_nums-1);idx2++)
            {
                if(nums_2nd[idx2]==residual)
                {
                    output[0] = idx1;
                    output[1] = (idx2+1);
                    return output;
                }
            }
        }
        return output;
    }
};