int numSteps(string s) {
    long int cnt = 0;

    while (s != "1") {
        if (s.back() == '0') {
            // If the last character is '0', remove it (equivalent to dividing by 2)
            s.pop_back();
        } else {
            // If the last character is '1', we need to add 1
            int i = s.size() - 1;
            while (i >= 0 && s[i] == '1') {
                s[i] = '0';
                i--;
            }
            if (i >= 0) {
                s[i] = '1';
            } else {
                // If all characters were '1', we need to add '1' at the beginning
                s.insert(s.begin(), '1');
            }
        }
        cnt++;
    }
    
    return cnt;
}

// Tc : o(n^2) in wrost case
// sc :o(1)