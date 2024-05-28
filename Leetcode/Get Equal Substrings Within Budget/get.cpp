class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
       int n =s.size();
       int left =0 ,right =0;
       int currentCost =0 , maxLen =0;

       while(right < n)
       {
        currentCost += abs(s[right] -t[right]);

        if(currentCost > maxCost)
        {
            currentCost -= abs(s[left]-t[left]);
            left++;
        }

        maxLen =max(maxLen , right-left+1);
        right++;
       }
       return maxLen;
    }
};

// Tc: O(N);
// Sc: O(1);