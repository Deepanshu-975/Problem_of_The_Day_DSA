#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Function to find two prime numbers whose sum equals the input number
void findPrimeSum(int num) {
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            cout << "Two prime numbers are: " << i << " and " << num - i << endl;
            return; // Exit after finding the pair
        }
    }
    cout << "No such prime numbers found!" << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 4) {
        cout << "No such prime numbers exist!" << endl;
    } else {
        findPrimeSum(num);
    }

    return 0;
}
