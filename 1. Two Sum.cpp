class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i = 0; i<nums.size()-1;i++){
            for(int j=i; j<nums.size()-1; j++){
                if(nums[i]+nums[j+1] == target){
                    result.push_back(i);
                    result.push_back(j+1);
                    break;
                }
            }
        }
        return result;
    } 
};