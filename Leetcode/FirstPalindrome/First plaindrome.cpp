#include<iostream>
using namespace std;

string firstPalindrome1 (vector<string>& words) {
    string result = "";
    int n = words.size();

    for (int i = 0; i < n; i++) {
        string currentWord = words[i];
        int low = 0, high = currentWord.length() - 1;
        bool isPalindrome = true;

        // Check if the word is a palindrome
        while (low <= high) {
            if (currentWord[low] != currentWord[high]) {
                isPalindrome = false;
                break; // If characters don't match, it's not a palindrome
            }
            low++;
            high--;
        }

        if (isPalindrome) {
            result = currentWord;
            break; // Found the first palindrome, no need to continue
        }
    }

    return result;
}


// Time Complexity-O(n⋅max_len)
// n= size of vector
// max_len=max len of the string

string firstPalindrome2(vector<string>& words) {
    for(auto i:words)
    {
        string ans =i;
        reverse(ans.begin(),ans.end());
        if(ans == i){
            return ans;
        }
    }
    return "";
}