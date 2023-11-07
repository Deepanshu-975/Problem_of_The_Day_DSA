#include<iostream>
#include<vector>
using namespace std;

// tc : o(n^2)
// sc : o(1)
vector<int> sumTriangles(const vector<vector<int> >& matrix, int n) {
    int upper = 0,lower = 0;  // Initialize a vector with two elements, both set to 0 for upper and lower sums

    // Calculate the sum of the upper triangular elements
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            upper += matrix[i][j];
        }
    }

    // Calculate the sum of the lower triangular elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            lower += matrix[i][j];
        }
    }

    return {lower,upper};
}
