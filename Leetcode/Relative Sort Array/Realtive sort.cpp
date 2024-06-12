vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    vector<int> ans;
    unordered_map<int, int> mpp;

    // Count the frequency of each element in arr1
    for (int i = 0; i < arr1.size(); i++) {
        mpp[arr1[i]]++;
    }

    // Add elements from arr1 to ans based on the order in arr2
    for (int i = 0; i < arr2.size(); i++) {
        int element = arr2[i];
        if (mpp.find(element) != mpp.end()) {
            while (mpp[element] > 0) {
                ans.push_back(element);
                mpp[element]--;
            }
            mpp.erase(element); // Remove the element from the map after adding
        }
    }

    // Add remaining elements from arr1 that are not in arr2
    vector<int> remaining;
    for (auto it = mpp.begin(); it != mpp.end(); ++it) {
        while (it->second > 0) {
            remaining.push_back(it->first);
            it->second--;
        }
    }

    // Sort the remaining elements
    sort(remaining.begin(), remaining.end());

    // Append sorted remaining elements to the result
    ans.insert(ans.end(), remaining.begin(), remaining.end());

    return ans;
}

Tc: o(n log n)
Sc: o(n)