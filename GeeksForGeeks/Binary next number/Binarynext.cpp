#include <string>
#include <cmath>
using namespace std;

string binaryNextNumber(string s) {
    // Convert the binary string to an integer
    int num = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '1') {
            num += pow(2, s.size() - 1 - i);
        }
    }

    // Increment the integer by 1
    num += 1;

    // Convert the resulting integer back to a binary string
    string result = "";
    while (num > 0) {
        result = (num % 2 == 0 ? "0" : "1") + result;
        num /= 2;
    }

    return result;
}