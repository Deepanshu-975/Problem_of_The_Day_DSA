 int findDuplicate(vector<int>& nums) {
       int low =1;
       int high =nums.size()-1;

       while(low < high)
       {
        int mid =low + (high-low)/2;
        int cnt =0;

        for(int num:nums)
        {
            if(num <= mid)
            cnt++;
        }
       if (cnt > mid) {
                high = mid;
        }
        else{
            low = mid+1;
        }
       }

       return low;
    }

    // Time complexity: O(NlogN)
    // Space complexity: O(1)

    class Solution {
public:
    int findDuplicate(std::vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        // Find the intersection point of the two pointers
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        // Find the entrance of the cycle
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};

// Time complexity: O(N)
// Space complexity: O(1)