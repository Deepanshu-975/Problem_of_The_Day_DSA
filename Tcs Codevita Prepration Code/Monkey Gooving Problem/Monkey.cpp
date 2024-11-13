#include <iostream>
#include <vector>

// This function calculates the number of steps required for all monkeys
// to return to their original positions after moving in a circular pattern.
int monkeyGrooving(std::vector<int>& positions) {
    int n = positions.size();  // Store the number of monkeys (positions)
    std::vector<int> temp(n);  // Temporary array to keep track of the current positions
    int steps = 0;  // Step counter to keep track of the number of moves

    // Copy initial positions to temp array
    for (int i = 0; i < n; ++i) {
        temp[i] = positions[i];  // Initialize temp with the starting positions of monkeys
    }

    // Repeat until all monkeys return to their original positions
    while (true) {
        bool inOriginalPosition = true;  // Flag to check if all monkeys are back in original position

        // Update positions for each monkey in the circular pattern
        std::vector<int> newPositions(n);  // Temporary array to store the new positions after each move
        for (int i = 0; i < n; ++i) {
            // Move each monkey to the next position in a circular fashion
            newPositions[(i + 1) % n] = temp[i];
        }

        // Check if all monkeys are back to their original positions
        for (int i = 0; i < n; ++i) {
            // Compare newPositions with initial positions to see if they're in the original configuration
            if (newPositions[i] != positions[i]) {
                inOriginalPosition = false;  // If any position doesn't match, set the flag to false
                break;  // No need to check further if we find one mismatch
            }
        }

        // Update the temp array with the new positions for the next iteration
        temp = newPositions;
        steps++;  // Increment the step counter

        if (inOriginalPosition) break;  // Exit the loop if all monkeys are back in place
    }

    return steps;  // Return the total number of steps required
}

int main() {
    std::vector<int> positions = {0, 1, 2, 3};  // Initial positions of monkeys
    int result = monkeyGrooving(positions);  // Call the function and get the result
    std::cout << "Number of steps for all monkeys to return to original positions: " << result << std::endl;
    return 0;
}
