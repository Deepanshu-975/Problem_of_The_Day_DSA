// Brute force approch 
int getLucky(string s, int k) {
    string ans = "";
    for(int i = 0; i < s.size(); i++) {
        ans += to_string(s[i] - 'a' + 1); // Convert each char to number and concatenate
    }

    for(int i = 0; i < k; i++) {
        int num = 0; // Reset num for each iteration
        for(int j = 0; j < ans.size(); j++) {
            num += ans[j] - '0'; // Convert character to digit and sum it
        }
        ans = to_string(num); // Update ans with the sum of digits as a string
    }

    return stoi(ans); // Convert the final ans string to an integer and return
}
Tc: O(N*K)
Sc : O(n+k)

// optimized code 
int getLucky(string s, int k) {
    int num = 0;
    
    // Convert each character in the string to its corresponding numeric value and sum the digits directly
    for (char c : s) {
        int value = c - 'a' + 1;
        while (value > 0) {
            num += value % 10;
            value /= 10;
        }
    }

    // Repeat the process k-1 times (we've already done it once)
    while (--k > 0) {
        int newNum = 0;
        while (num > 0) {
            newNum += num % 10;
            num /= 10;
        }
        num = newNum;
    }

    return num;
}

Tc: o(n + klog(n));
Sc :o(1)