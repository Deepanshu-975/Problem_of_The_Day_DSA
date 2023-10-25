#include <iostream>
#include <vector>
using namespace std;

vector<int> generatePascalsRow(int rowIndex) {
    vector<int> result;
    result.push_back(1); // The first element of every row is 1.

    for (int k = 1; k <= rowIndex; k++) {
        long long nextVal = static_cast<long long>(result.back()) * (rowIndex - k + 1) / k;
        result.push_back(static_cast<int>(nextVal));
    }

    return result;
}

int main() {
    int rowIndex;
    cout << "Enter the row index: ";
    cin >> rowIndex;

    vector<int> row = generatePascalsRow(rowIndex);

    cout << "Row " << rowIndex << " of Pascal's Triangle: ";
    for (int num : row) {
        cout << num << " ";
    }

    return 0;
}
