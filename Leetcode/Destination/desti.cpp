#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// Time complexity:
// O(n)

// Space complexity:
// O(n)

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> startCities;
        
        // Store all starting cities in a set
        for (const auto& path : paths) {
            startCities.insert(path[0]);
        }
        
        // Check destination cities to find the one not present in startCities
        for (const auto& path : paths) {
            if (startCities.find(path[1]) == startCities.end()) {
                return path[1]; // Found the destination city
            }
        }
        
        return ""; // No destination city found
    }
};

int main() {
    vector<vector<string>> paths = {{"A", "B"}, {"B", "C"}, {"C", "D"}, {"D", "E"}, {"E", "F"}};
    Solution solution;
    string destCity = solution.destCity(paths);
    cout << "Destination City: " << destCity << endl;
    return 0;
}
