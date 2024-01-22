#include <vector>

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans(2, 0);
        
        for (int i = 0; i < nums.size(); ++i) {
            while (nums[i] != nums[nums[i] - 1]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != i + 1) {
                ans[0] = nums[i];  // Repeated number
                ans[1] = i + 1;     // Missing number
                break;
            }
        }

        return ans;
    }
};


// Tc :o(n)
// sc :o(1)