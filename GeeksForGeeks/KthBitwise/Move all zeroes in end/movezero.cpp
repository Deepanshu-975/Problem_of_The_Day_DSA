	void pushZerosToEnd(int arr[], int n) {
    int count = 0; // Initialize a count for non-zero elements

    // Traverse the array
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            // If the current element is non-zero, move it to the 'count' position
            arr[count] = arr[i];
            count++;
        }
    }

    // Fill the remaining elements with zeros
    while (count < n) {
        arr[count] = 0;
        count++;
    }