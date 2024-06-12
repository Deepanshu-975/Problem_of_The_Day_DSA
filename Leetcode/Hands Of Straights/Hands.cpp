class Solution {
public:
   bool findSuccessors(vector<int>& hand, int groupSize, int i, int n) {
        int next = hand[i] + 1;
        hand[i] = -1;  // Mark as used
        int count = 1;
        i += 1;
        while (i < n && count < groupSize) {
            if (hand[i] == next) {
                next = hand[i] + 1;
                hand[i] = -1;
                count++;
            }
            i++;
        }
        return count == groupSize;
    }

    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if (n % groupSize != 0) return false;
        std::sort(hand.begin(), hand.end());
        for (int i = 0; i < n; i++) {
            if (hand[i] >= 0) {
                if (!findSuccessors(hand, groupSize, i, n)) return false;
            }
        }
        return true;
    }
};



// this approch using map
// Tc: O(n log n)
// Sc: O(n)

 bool isNStraightHand(vector<int>& hand, int groupSize) {
      if (hand.size() % groupSize != 0) {
        return false; // If hand size is not a multiple of group size, return false.
    }

    map<int, int> cardCount;
    for (int card : hand) {
        cardCount[card]++;
    }

    for (auto it = cardCount.begin(); it != cardCount.end(); ++it) {
        while (it->second > 0) {
            for (int i = 0; i < groupSize; ++i) {
                if (cardCount[it->first + i] <= 0) {
                    return false;
                }
                cardCount[it->first + i]--;
            }
        }
    }

    return true;
    }