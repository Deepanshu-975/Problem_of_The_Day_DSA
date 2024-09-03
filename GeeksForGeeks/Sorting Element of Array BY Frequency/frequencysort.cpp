#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> sortByFreq(vector<int>& arr) {
    vector<int> ans;
    unordered_map<int, int> freqMap;

    for (const auto& num : arr) {
        freqMap[num]++;
    }

    vector<pair<int, int>> freqVec;
    freqVec.reserve(freqMap.size()); // Reserve space to avoid multiple allocations
    for (const auto& it : freqMap) {
        freqVec.emplace_back(it.second, it.first); // emplace_back to construct in place
    }

    sort(freqVec.begin(), freqVec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return (a.first == b.first) ? a.second < b.second : a.first > b.first;
    });

    for (const auto& it : freqVec) {
        ans.insert(ans.end(), it.first, it.second); // More efficient insertion
    }

    return ans;
}


// Tc: O(nlog n)
// Sc: O(n)