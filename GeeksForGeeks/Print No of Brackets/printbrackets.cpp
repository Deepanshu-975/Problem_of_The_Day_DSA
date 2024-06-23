#include <vector>
#include <string>
#include <stack>

std::vector<int> bracketNumbers(const std::string& str) {
    std::vector<int> ans;
    std::stack<int> st;
    int cnt = 0;

    for (char ch : str) {
        if (ch == '(') {
            cnt++;
            st.push(cnt);
            ans.push_back(cnt);
        } else if (ch == ')') {
            if (!st.empty()) {
                ans.push_back(st.top());
                st.pop();
            }
        }
    }

    return ans;
}


// Tc: O(n)
// Sc: O(n)