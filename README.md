# Matrix Diagonal Sum

## Problem Description

Given a square matrix of integers, calculate the sum of both diagonals.

### Input

- A 2D vector (matrix) of integers, where each row contains the same number of elements.
- The matrix size is `n x n` (where `n` is a positive integer).

### Output

- An integer representing the sum of both diagonals.

### Example

```cpp
Input:
matrix = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
}

Output:
Sum of diagonals = 1 + 5 + 9 + 3 + 7 = 25
```

### Constraints

- The matrix size is between 1 and 100.
- Each element in the matrix is an integer between -1000 and 1000.

### Notes

- The primary diagonal consists of elements where the row index equals the column index (i.e., `matrix[i][i]`).
- The secondary diagonal consists of elements where the sum of the row index and column index equals `n - 1` (i.e., `matrix[i][n - 1 - i]`).

## Implementation Details

1. Initialize two variables to keep track of the primary diagonal sum and the secondary diagonal sum.
2. Use nested for loops to iterate through the matrix elements.
3. Add the corresponding diagonal elements to their respective sums.
4. Return the total sum of both diagonals.

## Example Usage

```cpp
#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the sum of both diagonals in the matrix
int diagonalSum(vector<vector<int>>& matrix) {
    // Implementation details (as shown in the solution)

    // Return the total sum
}

int main() {
    // Example matrix (you can modify this for testing)
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int result = diagonalSum(matrix);
    cout << "Sum of diagonals = " << result << endl;

    return 0;
}
```

---

Feel free to add more details, explanations, or additional sections to enhance the README. Good luck with your programming course! 🚀
