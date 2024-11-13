int maxWidthRamp(vector<int>& nums) {
    int maxi = 0;
    int n = nums.size();
    int s = 0, e = 0;

    while (e < n) {
        if (nums[s] <= nums[e]) {
            maxi = max(maxi, e - s);
            e++;
        } else {
            if (s < e) {
                s++;
            } else {
                e++;
            }
        }
    }
    return maxi;
}
