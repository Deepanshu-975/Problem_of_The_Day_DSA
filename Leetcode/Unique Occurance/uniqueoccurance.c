class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      unordered_map<int, int> mpp;
    for(int i = 0; i < arr.size(); i++) {
        mpp[arr[i]]++;
    }

    unordered_set<int> occurrences;
    for(auto it : mpp) {
        if(occurrences.count(it.second) > 0) {
            return false; // If the occurrence is already seen, not unique
        }
        occurrences.insert(it.second);
    }

    return true;
    }
};