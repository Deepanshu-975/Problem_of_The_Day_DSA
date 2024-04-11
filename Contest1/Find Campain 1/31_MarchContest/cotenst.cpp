// 100266. Count Alternating Subarrays

// You are given a binary array nums.

// We call a subarray alternating if no two adjacent elements in the subarray have the same value.

// Return the number of alternating subarrays in nums.


long long countAlternatingSubarrays(vector<int>& nums) {
       int n = nums.size();
        int i = 0, j = 0;
        long long cnt = 0;
        
        while (j < n) {
            // Expand the window
            while (j + 1 < n && nums[j] != nums[j + 1]) {
                j++;
            }
            
            long long len = j - i + 1;
            cnt += (len * (len + 1)) / 2;  // Number of subarrays with distinct elements
            
            // Shrink the window
            i = j + 1;
            j = i;
        }
        
        return cnt;
        
    }