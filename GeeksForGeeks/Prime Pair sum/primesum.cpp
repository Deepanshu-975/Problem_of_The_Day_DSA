 vector<int> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

vector<int> getPrimes(int n) {
    vector<int> ans = sieve(n);
    
    vector<int> res(2, -1);
    int start = 0, end = ans.size() - 1;
    while (start <= end) {
        if (ans[start] + ans[end] == n) {
            res[0] = ans[start];
            res[1] = ans[end];
            break; // Found the pair, exit the loop
        } else if (ans[start] + ans[end] > n) {
            end--;
        } else {
            start++;
        }
    }
    return res;
}

