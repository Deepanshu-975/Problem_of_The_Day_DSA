long long int sumXOR(int arr[], int n)
{
    long long sum = 0;

    for (int bit = 31; bit >= 0; bit--) {
        int countOnes = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] & (1 << bit)) {
                countOnes++;
            }
        }
        sum += (1LL << bit) * countOnes * (n - countOnes);
    }

    return sum;
}