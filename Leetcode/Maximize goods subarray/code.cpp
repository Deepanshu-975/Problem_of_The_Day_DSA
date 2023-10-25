#include <iostream>
#include <vector>

class Solution {
public:
    int maximumScore(std::vector<int>& nums, int k) {
        int left = k, right = k;
        int min_val = nums[k];
        int max_score = min_val;

        while (left > 0 || right < nums.size() - 1) {
            if (left == 0 || (right < nums.size() - 1 && nums[right + 1] > nums[left - 1])) {
                right++;
            } else {
                left--;
            }
            min_val = std::min(min_val, std::min(nums[left], nums[right]));
            max_score = std::max(max_score, min_val * (right - left + 1));
        }
        
        return max_score;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {1, 4, 3, 7, 4, 5};
    int k = 3;

    int result = solution.maximumScore(nums, k);
    std::cout << "Maximum Score: " << result << std::endl;

    return 0;
}
