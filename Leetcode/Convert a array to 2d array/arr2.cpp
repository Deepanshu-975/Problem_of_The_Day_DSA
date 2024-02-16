#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> frequency(nums.size() + 1);
        vector<vector<int>> result;
        
        for (int num : nums) {
            if (frequency[num] >= result.size()) {
                result.push_back({});
            }
            
            result[frequency[num]].push_back(num);
            frequency[num]++;
        }
        
        return result;
    }
};

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    Solution solution;
    vector<int> nums = {1,3,4,1,2,3,1};
    
    vector<vector<int>> result = solution.findMatrix(nums);

    cout << "Result Matrix:" << endl;
    printMatrix(result);
    
    return 0;
}
