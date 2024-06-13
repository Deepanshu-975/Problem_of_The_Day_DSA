#include <iostream>
using namespace std;

int countNumbersWith4(int n) {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int ans = i;
        while (ans > 0) {
            int dig = ans % 10;
            if (dig == 4)
                cnt++;
            ans /= 10;
        }
    }
    return cnt;
}

int main() {
    int n = 61;
    cout << "Count of digit 4 in numbers from 1 to " << n << " is: " << countNumbersWith4(n) << endl;
    return 0;
}
