class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int low = 0;
        int high = 1;

        while(high < nums.size())
        {
            if(nums[low] == nums[high])
                high++;
            
            else
            {
                nums[low+1] = nums[high];

                high++;
                low++;
            }
        }
        return low+1;
    }
};