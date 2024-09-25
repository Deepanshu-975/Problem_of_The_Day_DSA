#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

struct TrieNode {
    unordered_map<char, TrieNode*> children;
    int prefixCount;  // Count of words sharing this prefix
    TrieNode() : prefixCount(0) {}
};

class Trie {
public:
    TrieNode* root;
    
    Trie() {
        root = new TrieNode();
    }

    // Insert a word into the Trie
    void insert(const string& word) {
        TrieNode* node = root;
        for (char c : word) {
            if (node->children.find(c) == node->children.end()) {
                node->children[c] = new TrieNode();
            }
            node = node->children[c];
            node->prefixCount++;
        }
    }

    // Calculate the prefix score of a word
    int getPrefixScore(const string& word) {
        TrieNode* node = root;
        int score = 0;
        for (char c : word) {
            node = node->children[c];
            score += node->prefixCount;
        }
        return score;
    }
};

vector<int> sumPrefixScores(vector<string>& words) {
    Trie trie;
    // Insert all words into the Trie
    for (const string& word : words) {
        trie.insert(word);
    }

    vector<int> result;
    // Calculate the prefix score for each word
    for (const string& word : words) {
        result.push_back(trie.getPrefixScore(word));
    }

    return result;
}


// Time Complexity (TC): O(n * m)
// Space Complexity (SC): O(n * m)