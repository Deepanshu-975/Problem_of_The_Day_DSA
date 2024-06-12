#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_set>

using namespace std;

string replaceWords(vector<string>& dictionary, string s) {
    unordered_set<string> dict(dictionary.begin(), dictionary.end());
    istringstream iss(s);
    string word;
    string result;

    while (iss >> word) {
        string prefix;
        for (int i = 1; i <= word.length(); ++i) {
            prefix = word.substr(0, i);
            if (dict.find(prefix) != dict.end()) {
                break;
            }
        }
        if (!result.empty()) {
            result += " ";
        }
        result += prefix;
    }
    
    return result;
}

int main() {
    vector<string> dictionary = {"cat", "bat", "rat"};
    string sentence = "the cattle was rattled by the battery";
    string result = replaceWords(dictionary, sentence);
    cout << result << endl;  // Output: "the cat was rat by the bat"
    return 0;
}
