<<<<<<< HEAD
// Approch1 :
// sort using inbuilt method
// Tc :o(n log n)
// Sc :o(1)

// Approch 2 
void sortColors(vector<int>& nums) {
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    // Counting phase
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == 0)
            cnt0++;
        else if(nums[i] == 1)
            cnt1++;
        else
            cnt2++;
    }

    // Overwriting phase
    int index = 0;
    for(int i = 0; i < cnt0; i++) nums[index++] = 0;
    for(int i = 0; i < cnt1; i++) nums[index++] = 1;
    for(int i = 0; i < cnt2; i++) nums[index++] = 2;
}

// Tc: o(n)
// Sc: o(1)


// Approch 3
// If you want to use a single-pass algorithm with constant space, you can use the Dutch National Flag algorithm:

void sortColors(vector<int>& nums) {
    int low = 0, mid = 0, high = nums.size() - 1;

    while(mid <= high) {
        if(nums[mid] == 0) {
            swap(nums[low++], nums[mid++]);
        } else if(nums[mid] == 1) {
            mid++;
        } else {
            swap(nums[mid], nums[high--]);
        }
    }
}

// Tc :o(n)
// Sc :o(1)


=======
// Approch1 :
// sort using inbuilt method
// Tc :o(n log n)
// Sc :o(1)

// Approch 2 
void sortColors(vector<int>& nums) {
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    // Counting phase
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == 0)
            cnt0++;
        else if(nums[i] == 1)
            cnt1++;
        else
            cnt2++;
    }

    // Overwriting phase
    int index = 0;
    for(int i = 0; i < cnt0; i++) nums[index++] = 0;
    for(int i = 0; i < cnt1; i++) nums[index++] = 1;
    for(int i = 0; i < cnt2; i++) nums[index++] = 2;
}

// Tc: o(n)
// Sc: o(1)


// Approch 3
// If you want to use a single-pass algorithm with constant space, you can use the Dutch National Flag algorithm:

void sortColors(vector<int>& nums) {
    int low = 0, mid = 0, high = nums.size() - 1;

    while(mid <= high) {
        if(nums[mid] == 0) {
            swap(nums[low++], nums[mid++]);
        } else if(nums[mid] == 1) {
            mid++;
        } else {
            swap(nums[mid], nums[high--]);
        }
    }
}

// Tc :o(n)
// Sc :o(1)


>>>>>>> f58e7056e11df797b869d64251745cc91883f081
