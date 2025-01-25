#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int find_smallest_prime(int q, const vector<int>& nums) {
    int p = q + 1;
    while (true) {
        if (is_prime(p)) {
            bool valid = true;
            for (int num : nums) {
                if (p % num != q) {
                    valid = false;
                    break;
                }
            }
            if (valid) return p;
        }
        p++;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int& x : v) cin >> x;

    int q = *min_element(v.begin(), v.end());
    v.erase(find(v.begin(), v.end(), q));

    int result = find_smallest_prime(q, v);
    cout << result;
}


// #include <bits/stdc++.h>
// using namespace std;

// int gcd(int a, int b) {
//     return (b == 0) ? a : gcd(b, a % b);
// }

// int findlcm(const vector<int>& arr) {
//     int lcm = arr[0];
//     for (int i = 1; i < arr.size(); i++)
//         lcm = (arr[i] * lcm) / gcd(arr[i], lcm);
//     return lcm;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int& t : v) cin >> t;

//     int min_val = *min_element(v.begin(), v.end());
//     v.erase(find(v.begin(), v.end(), min_val));

//     int lcm = findlcm(v);
//     cout << lcm + min_val;
// }

