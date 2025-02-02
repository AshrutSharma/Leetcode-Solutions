class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int, int> map;

        for(int i:nums)
            map[i]++;
        
        for(auto i:map)
        {
            if (i.second > nums.size()/2){
                return i.first;
            }
        }
        return 0;
    }
};
