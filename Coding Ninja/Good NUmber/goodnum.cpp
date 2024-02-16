#include <unordered_set>

bool isGoodNumber(int n) {
    std::unordered_set<int> seen;

    while (n != 1 && !seen.count(n)) {
        seen.insert(n);
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        n = sum;
    }

    return n == 1;
}

// logic 
// tc : o(n) sc:o(1)

bool isGoodNumber(int n) {
    int sum =0;
    while(n!=0)
    {
        int dig =n%10;
        sum +=dig *dig;
        n= n/10;
    }
    if(sum == 1)return true;
    if(sum <10) return false;

    return isGoodNumber(sum);
}
