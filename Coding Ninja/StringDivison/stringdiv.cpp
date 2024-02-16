#include <bits/stdc++.h>
using namespace std;

vector<string> divideString(string &word, int n) {
    vector<string> ans(n);
    string a = "";

    int segmentSize = word.size() / n;
    int extraChars = word.size() % n;

    int start = 0;
    for (int i = 0; i < n; i++) {
        int currentSegmentSize = segmentSize + (i < extraChars ? 1 : 0);
        
        for (int j = 0; j < currentSegmentSize; j++) {
            a += word[start + j];
        }

        ans[i] = a;
        a = "";  // Reset the temporary string for the next segment
        start += currentSegmentSize;
    }

    return ans;
}

int main() {
    string word = "codingninjas";
    int n = 2;

    vector<string> result = divideString(word, n);

    for (const string &segment : result) {
        cout << segment << " ";
    }

    return 0;
}
