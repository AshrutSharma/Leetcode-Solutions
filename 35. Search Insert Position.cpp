class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int low = 0;
        int high = nums.size()-1;
        int mid = -1;

        if (target > nums[high])
            return nums.size();

        if (target <nums[low])
            return 0;

        while(low <= high)
        {
            mid = low + (high - low )/2;

            if (nums[mid] == target)
                return mid;

            else if (target < nums[mid])
                high = mid - 1; 
             
            else
                 low = mid + 1; 
               
        }

    return low;

    }
};