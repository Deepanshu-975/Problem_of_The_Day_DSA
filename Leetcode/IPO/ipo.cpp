#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
    int n = profits.size();
    vector<pair<int, int>> projects(n);
    
    // Create a vector of pairs (capital, profit)
    for (int i = 0; i < n; ++i) {
        projects[i] = {capital[i], profits[i]};
    }
    
    // Sort projects based on capital required
    sort(projects.begin(), projects.end());
    
    // Min-heap to maintain available projects based on capital
    priority_queue<int, vector<int>, greater<int>> minCapitalHeap;
    
    // Max-heap to maintain the available projects based on profit
    priority_queue<int> maxProfitHeap;
    
    int i = 0;
    
    // Perform k projects
    for (int j = 0; j < k; ++j) {
        // Push all projects that can be started with current capital into max-heap
        while (i < n && projects[i].first <= w) {
            maxProfitHeap.push(projects[i].second);
            ++i;
        }
        
        // If no projects can be started, break the loop
        if (maxProfitHeap.empty()) {
            break;
        }
        
        // Get the project with the maximum profit
        w += maxProfitHeap.top();
        maxProfitHeap.pop();
    }
    
    return w;
}
